s = input()
n = int(input())


def anagram(s):
    if len(set(s)) == 1: return "No"
    sl = list(s)
    sl.sort()
    return "Yes" if sl != sorted(set(s)) else "No"


for _ in range(n):
    l, r = input().split(" ")

    if l == r:
        print("Yes")
        continue

    print(anagram(s[int(l) - 1:int(r)]))
