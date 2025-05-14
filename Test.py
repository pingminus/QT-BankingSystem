import random

def generate_random_number(min_val=90000, max_val=100000):
    """
    Generate a single random number.

    Parameters:
        min_val (int): Minimum value of the random number.
        max_val (int): Maximum value of the random number.

    Returns:
        int: A random number between min_val and max_val.
    """
    return random.randint(min_val, max_val)

if __name__ == "__main__":
    # Generate and print a single random number from 90,000 to 100,000
    random_number = generate_random_number()
    print(random_number)
