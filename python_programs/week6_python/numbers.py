import sys
from cs50 import get_int

numbers = [4, 6, 8, 2, 7, 5, 0]
n = get_int("Input a number: ")

if n in numbers:
    print("Found")
    sys.exit(0)

print("Not found.")
sys.exit(1)