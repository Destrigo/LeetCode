class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        i = 0
        for x in digits:
            i = i * 10 + int(x)
        i += 1
        new_digits = []
        while i > 9:
            new_digits.insert(0, i % 10)
            i = i // 10
        new_digits.insert(0, i % 10)
        return new_digits