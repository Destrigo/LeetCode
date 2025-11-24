class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        x = 0
        while True:
            if x == len(strs[0]):
                break
            tmp = strs[0][x]
            for i in strs:
                if x == len(i) or i[x] != tmp:
                    return strs[0][:x]
            x += 1
        return strs[0][:x]