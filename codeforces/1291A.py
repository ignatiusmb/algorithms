from random import randint

t = int(input())


def calculate(num):
    s = 0
    for i in range(len(num)):
        s += int(num[i])
    return s


def check(num):
    if int(num) % 2 and not calculate(num) % 2:
        print(num)
        return True
    return False


for _ in range(t):
    digits = int(input())
    number = input()

    if not int(number) or (digits == 1 and not check(number)):
        print(-1)
        continue

    if check(number): continue

    while digits:
        if digits == 1 and not check(number):
            print(-1)
            break

        r = randint(1, digits - 1)
        number = number[:r] + number[r + 1:]
        if check(number): break
        digits -= 1
