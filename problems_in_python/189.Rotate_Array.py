class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        if len(nums) != 1:
            while k:
                temp = nums.pop(-1)
                nums.insert(0, temp)
                k -= 1