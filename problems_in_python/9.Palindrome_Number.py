class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        string = str(x)
        reversed_s = string[::-1]
        if string == reversed_s:
            return True
        return False