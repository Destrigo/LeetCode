class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        diff = 0
        tmp = 0
        prev = 0
        i = 0
        nums = sorted(nums)
        for n in nums:
            if i == 0:
                i+=1
            else:
                tmp = n - prev
                if tmp > diff:
                    diff = tmp
            prev = n
        return diff