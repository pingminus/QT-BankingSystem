import sys
import json
import requests
import os

DATA_FILE = os.path.join(os.path.dirname(__file__), "btc_data.json")

# Initialize or load data
def load_data():
    if not os.path.exists(DATA_FILE):
        with open(DATA_FILE, "w") as f:
            json.dump({}, f)
    with open(DATA_FILE, "r") as f:
        return json.load(f)

def save_data(data):
    with open(DATA_FILE, "w") as f:
        json.dump(data, f, indent=4)

def get_btc_price():
    try:
        response = requests.get("https://api.coingecko.com/api/v3/simple/price",
                                params={"ids": "bitcoin", "vs_currencies": "usd"})
        return response.json()["bitcoin"]["usd"]
    except:
        return None

def invest(username, amount):
    data = load_data()
    btc_price = get_btc_price()
    if btc_price is None:
        print("Error: Unable to fetch BTC price")
        return

    if username not in data:
        data[username] = {
            "cash_balance": 10000,
            "btc_invested": 0,
            "btc_value": 0,
            "btc_price_at_buy": 0,
            "transactions": []
        }

    user = data[username]

    if user["cash_balance"] < amount:
        print("Error: Insufficient balance")
        return

    user["cash_balance"] -= amount
    user["btc_invested"] = amount
    user["btc_price_at_buy"] = btc_price
    user["btc_value"] = amount
    user["transactions"].append(f"Invested ${amount} in BTC at ${btc_price}")

    save_data(data)
    print(f"Success: Bought BTC for ${amount} at ${btc_price}")

def evaluate(username):
    data = load_data()
    btc_price = get_btc_price()
    if btc_price is None or username not in data:
        print("Error: User not found or no price")
        return

    user = data[username]
    if user["btc_invested"] == 0:
        print("No investment found")
        return

    gain = btc_price / user["btc_price_at_buy"]
    new_value = int(user["btc_invested"] * gain)
    user["btc_value"] = new_value
    save_data(data)
    print(f"{new_value}")

def sell(username):
    data = load_data()
    btc_price = get_btc_price()
    if btc_price is None or username not in data:
        print("Error")
        return

    user = data[username]
    value = user["btc_value"]
    user["cash_balance"] += value
    user["btc_invested"] = 0
    user["btc_value"] = 0
    user["btc_price_at_buy"] = 0
    user["transactions"].append(f"Sold BTC for ${value} at ${btc_price}")

    save_data(data)
    print(f"Success: Sold BTC for ${value} at ${btc_price}")

def get_balance(username):
    data = load_data()
    if username not in data:
        print("Error: User not found")
        return

    user = data[username]
    print(json.dumps({
        "cash_balance": user["cash_balance"],
        "btc_value": user["btc_value"],
        "btc_invested": user["btc_invested"]
    }))

def add_user(username):
    data = load_data()
    if username not in data:
        data[username] = {
            "cash_balance": 10000,
            "btc_invested": 0,
            "btc_value": 0,
            "btc_price_at_buy": 0,
            "transactions": []
        }
        save_data(data)
        print("User created.")
    else:
        print("User already exists.")

def get_transactions(username):
    data = load_data()
    if username not in data:
        print("[]")
        return
    print(json.dumps(data[username].get("transactions", [])))

# -------------------------
# Main CLI entry
# -------------------------
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: btc_backend.py <command> [args]")
        sys.exit(1)

    command = sys.argv[1]

    if command == "get_price":
        print(get_btc_price())

    elif command == "invest":
        if len(sys.argv) != 4:
            print("Usage: invest <username> <amount>")
        else:
            invest(sys.argv[2], int(sys.argv[3]))

    elif command == "sell":
        sell(sys.argv[2])

    elif command == "evaluate":
        evaluate(sys.argv[2])

    elif command == "balance":
        get_balance(sys.argv[2])

    elif command == "add_user":
        add_user(sys.argv[2])

    elif command == "transactions":
        get_transactions(sys.argv[2])
