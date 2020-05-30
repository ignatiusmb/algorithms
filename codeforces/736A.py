n = int(input())

if n == 2:
    print(1)
else:
    res = 0
    while n > 1:
        n /= 2
        res += 1
    print(res)
