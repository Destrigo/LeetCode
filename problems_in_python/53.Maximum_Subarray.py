class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        res = -9999999
        currentSum = 0
        
        for num in nums:
            currentSum += num
            
            if currentSum > res:
                res = currentSum
            
            if currentSum < 0:
                currentSum = 0
        
        return res