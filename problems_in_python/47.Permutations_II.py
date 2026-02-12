class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        def get_perms(nums: List[int]) -> List[List[int]]:
            if len(nums) == 1:
                return [nums[:]]
        
            res = []

            for _ in range(len(nums)):
                num = nums.pop(0)
                perms = get_perms(nums)

                for p in perms:
                    p.append(num)
                
                res.extend(perms)
                nums.append(num)
            return res
        res = get_perms(nums)
        return [list(x) for x in dict.fromkeys(tuple(x) for x in res)]