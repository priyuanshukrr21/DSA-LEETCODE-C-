import sqlite3

conn = sqlite3.connect("student.db")

cur = conn.cursor()

cur.execute("""
CREATE TABLE IF NOT EXISTS Student(
    id INTEGER,
    name TEXT
)
""")

cur.execute(
    "INSERT INTO Student VALUES(1, 'Rahul')"
)

conn.commit()

cur.execute("SELECT * FROM Student")
print(cur.fetchall())

conn.close()