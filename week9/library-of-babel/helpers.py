import random
from string import ascii_letters


def random_string(len):
    """Generate a random lowercase string of length `len`."""

    string = ""
    for _ in range(len):
        string += random.choice(ascii_letters)
    return string.lower()
