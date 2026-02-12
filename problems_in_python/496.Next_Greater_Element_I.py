class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        answer = []
        for n in nums1:
            match = False
            flag = False
            for y in nums2:
                if match == True and y > n and flag == False:
                    answer.append(y)
                    flag = True
                if n == y:
                    match = True
            if flag == False:
                answer.append(-1)
        return answer