class Solution:
    def countAndSay(self, n: int) -> str:
        if n == 1:
            return "1"
        if n == 0:
            return "0"
        s = self.countAndSay(n - 1)
        
        i = 0
        res = ""
        while i < len(s):
            cnt = 1
            while i + 1 < len(s) and s[i] == s[i + 1]:
                cnt += 1
                i += 1
            res += str(cnt) + s[i]
            i += 1
        return res