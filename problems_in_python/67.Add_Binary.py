class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sm = int(a, 2) + int(b, 2)
        return (str(bin(sm))[2:])
