# Time & Space Complexity: O(1), O(1)
# 1162261467 is 3**19, the limit for int power of 3
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        return n > 0 and not 1162261467 % n


# Time & Space Complexity: Unknown, O(1)
class Solution:
    from math import log

    def isPowerOfThree(self, n: int) -> bool:
        if n <= 0: return False
        res = round(log(n, 3))
        return 3**res == n
