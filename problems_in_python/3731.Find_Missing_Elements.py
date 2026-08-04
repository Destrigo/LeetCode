class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
       if len(nums) < 2:
            return []
       mx = max(nums)
       mn = min(nums)

       new_arr = []
       for i in range(mn, mx):
        if i not in nums:
            new_arr.append(i)

       return new_arr
