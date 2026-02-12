class Solution:
    def convertToBase7(self, num: int) -> str:
        ha = "0123456"
        answer = ""
        if num == 0:
            return "0"
        if num < 0:
            new_num = num * -1
            answer += "-"
        else:
            new_num = num
        a = ""
        while new_num != 0:
            a += str(new_num % 7)
            new_num = int(new_num / 7)
        return (answer + a[::-1])
        