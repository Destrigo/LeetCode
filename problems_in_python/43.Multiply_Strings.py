class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        n1 = 0
        for c in num1:
            n1 = n1 * 10
            n1 = n1 + (ord(c) - 48)
        n2 = 0
        for c in num2:
            n2 = n2 * 10
            n2 = n2 + (ord(c) - 48)
        return str(n1 * n2)
        