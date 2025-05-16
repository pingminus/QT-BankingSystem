import requests
import sys

#Fetch live Bitcoin data
def get_bitcoin_price():
    # CoinGecko API URL
    url = "https://api.coingecko.com/api/v3/simple/price?ids=bitcoin&vs_currencies=usd"
    response = requests.get(url)

    if response.status_code == 200:
        # Parse the response as JSON
        data = response.json()
        bitcoin_price = data["bitcoin"]["usd"]
        print(bitcoin_price)  # Output the price to stdout
    else:
        print("Error: Unable to retrieve data from CoinGecko API.")
        sys.exit(1)

if __name__ == "__main__":
    get_bitcoin_price()
