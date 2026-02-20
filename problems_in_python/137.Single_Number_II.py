class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        nums = sorted(nums)
        i = 0
        while i < len(nums) - (len(nums) % 3):
            if nums[i] != nums[i+1] or nums[i] != nums[i+2]:
                if nums[i] == nums[i+1]:
                    return nums[i+2]
                if nums[i] == nums[i+2]:
                    return nums[i+1]
                if nums[i+1] == nums[i+2]:
                    return nums[i]
            i += 3
        if len(nums) - (len(nums) % 3) == 1:
            return nums[len(nums)-1]
        elif nums[len(nums)-2] == nums[len(nums)-3]:
            return nums[len(nums)-1]
        else:
            return nums[len(nums)-2]