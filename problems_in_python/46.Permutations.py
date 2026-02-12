class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1:
            return [nums[:]]
        
        res = []

        for _ in range(len(nums)):
            num = nums.pop(0)
            perms = self.permute(nums)

            for p in perms:
                p.append(num)
            
            res.extend(perms)
            nums.append(num)
        return res