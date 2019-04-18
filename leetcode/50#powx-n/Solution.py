class Solution:
    def myPow(x, n):  # add self for submission
        # uncomment line below for submission
        # neg = False
        if n < 0:
            neg = True
            n = -n
        res = 1
        while n > 0:
            if n % 2 == 1:
                res *= x
            n //= 2
            x *= x
        if neg:
            return 1 / res
        return res
