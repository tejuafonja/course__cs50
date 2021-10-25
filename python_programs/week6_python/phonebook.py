import csv
from cs50 import get_string, get_int

name = input("Name: ")
number = int(input("Number: "))

with open("phonebook.csv", "a") as f:
    writer = csv.reader(f)
    writer.write([name, number])


houses = {

}

with open("hogwart.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        house = row["House"]
        houses[house] += 1
    

for house in houses:
    count = houses[house]
    print(f"{house}: {count}")