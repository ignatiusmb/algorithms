class Solution:
    def isNumber(self, s: str) -> bool:
        try:
            return isinstance(float(s), float)
        except:
            return False
