class Solution:
    def findMaxConsecutiveOnes(self,
                               nums: list[int]) -> int:
        c = 0
        mx = 0
        for n in nums:
            if n == 1:
                c += 1
            else:
                c = 0
            if c > mx:
                mx = c
        return mx
