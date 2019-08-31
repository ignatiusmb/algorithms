rows = int(input("Rows: "))
space = rows if rows % 2 else rows - 1
for i in range(rows):
    for j in range(space):
        print(end=" ")
    space -= 1
    for j in range(i + 1):
        print("*", end=" ")
    print("")
