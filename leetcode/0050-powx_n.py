class Solution:
    def myPow(self, x: float, n: int) -> float:
        y = -n if n < 0 else n
        res = 1
        while y > 0:
            res = res * x if y % 2 == 1 else res
            y //= 2
            x *= x
        return 1 / res if n < 0 else res
