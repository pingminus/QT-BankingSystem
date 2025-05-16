import random


#Change the python file that is getting called in dashboard.cpp to this one if you want to play around with the invest function
def generate_random_number(min_val=1, max_val=110000):
    return random.randint(min_val, max_val)

if __name__ == "__main__":
    # Generate and print a single random number from 90,000 to 100,000
    random_number = generate_random_number()
    print(random_number)
