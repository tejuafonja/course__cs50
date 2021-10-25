import csv
from cs50 import SQL

title = input("Title: ").strip()
db = SQL("sqlite:///favorites.db")

rows = db.execute("SELECT COUNT(*) AS counter FROM favorites WHERE title LIKE ?", title)

row = rows[0]
print(f"Counter of {title} is {row['counter']}")