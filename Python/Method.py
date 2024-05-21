import os               # Operating System specific functionality
import sys              # System-specific parameters and functions
import math             # Mathematical functions
import random           # Generate pseudo-random numbers
import datetime         # Basic date and time types
import string           # Common string operations
import json             # JSON encoder and decoder
import csv              # CSV file reading and writing
import urllib.request   # URL handling module
import re               # Regular expression operations
import subprocess       # Subprocess management
import shutil           # High-level file operations
import itertools        # Functions creating iterators for efficient looping

# Method 1: Print to console
def print_example():
    print("Hello, World!")

# Method 2: Read from console
def input_example():
    name = input("Enter your name: ")
    print("Hello,", name)

# Method 3: Check if file exists
def file_exists_example():
    if os.path.exists("example.txt"):
        print("File exists!")
    else:
        print("File does not exist!")

# Method 4: Write to file
def write_file_example():
    with open("output.txt", "w") as file:
        file.write("This is a test.")

# Method 5: Read from file
def read_file_example():
    with open("input.txt", "r") as file:
        content = file.read()
        print("Content of input file:", content)

# Method 6: Math operations
def math_example():
    num = math.sqrt(16)
    print("Square root of 16:", num)

# Method 7: Generate random number
def random_example():
    num = random.randint(1, 100)
    print("Random number between 1 and 100:", num)

# Method 8: Get current date and time
def datetime_example():
    now = datetime.datetime.now()
    print("Current date and time:", now)

# Method 9: String operations
def string_example():
    s = "Hello, World!"
    print("Length of string:", len(s))
    print("Uppercase:", s.upper())
    print("Lowercase:", s.lower())
    print("Capitalized:", s.capitalize())
    print("Reversed:", s[::-1])

# Method 10: JSON encoding and decoding
def json_example():
    data = {'name': 'John', 'age': 30}
    json_str = json.dumps(data)
    print("JSON string:", json_str)

# Method 11: CSV file operations
def csv_example():
    with open('data.csv', mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Name', 'Age'])
        writer.writerow(['John', 30])

# Method 12: URL handling
def urllib_example():
    with urllib.request.urlopen("https://www.example.com") as response:
        html = response.read()
        print("HTML content:", html)

# Method 13: Regular expression operations
def re_example():
    text = "The quick brown fox jumps over the lazy dog."
    pattern = r"\b\w{3}\b"
    matches = re.findall(pattern, text)
    print("Matches:", matches)

# Method 14: Subprocess management
def subprocess_example():
    result = subprocess.run(["ls", "-l"], capture_output=True, text=True)
    print("List of files:", result.stdout)

# Method 15: Copy files
def shutil_example():
    shutil.copy("source.txt", "destination.txt")
    print("File copied successfully.")

# Method 16: Iterate through combinations
def itertools_example():
    letters = ['a', 'b', 'c']
    combos = itertools.combinations(letters, 2)
    print("Combinations:", list(combos))

# Method 17: Iterate through permutations
# (Permutations example already used in itertools_example)

# Method 18: Iterate through product
def itertools_product_example():
    numbers = [1, 2]
    letters = ['a', 'b']
    products = itertools.product(numbers, letters)
    print("Product:", list(products))

# Method 19: Iterate through cycle
def itertools_cycle_example():
    colors = ['red', 'green', 'blue']
    cycle = itertools.cycle(colors)
    print("Cycling through colors:")
    for _ in range(5):
        print(next(cycle))

# Method 20: Iterate through count
def itertools_count_example():
    count = itertools.count(start=10, step=2)
    print("Counting:")
    for _ in range(5):
        print(next(count))

# Call each method to demonstrate
print_example()
input_example()
file_exists_example()
write_file_example()
read_file_example()
math_example()
random_example()
datetime_example()
string_example()
json_example()
csv_example()
urllib_example()
re_example()
subprocess_example()
shutil_example()
itertools_example()
itertools_product_example()
itertools_cycle_example()
itertools_count_example()

