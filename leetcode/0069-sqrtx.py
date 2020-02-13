# Time & Space Complexity: Unknown, O(1)
class Solution:
    def mySqrt(self, x: int) -> int:
        return int(x**(1 / 2))


# Using Newton Square Root Method
class Solution:
    def newton_sqrt(num: int) -> int:
        if num == 0: return num
        estimate = userInput = num
        while abs(estimate - userInput / estimate) > 1e-15 * estimate:
            estimate = (userInput / estimate + estimate) / 2
        return estimate
