class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        i = 0
        lst = s.strip().split(" ")
        for x in lst:
            i += 1
            if i == len(lst):
                return len(x)
