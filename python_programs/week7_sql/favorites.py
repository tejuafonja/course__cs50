import csv
import re

counter = 0

title = input("Title: ").strip().upper()
with open("favorite.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        if row["title"].strip().upper() == title:
        # if re.search("^(GAME OF THRONES|GOT)$", title):
            counter += 1

print(counter)