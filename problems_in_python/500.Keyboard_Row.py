class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        first_row = "qwertyuiop[]"
        second_row = "asdfghjkl;'ASDFGHJKL"
        third_row = "zxcvbnm,./ZXCVBNM<>?"
        answer = []
        for lst in words:
            first_flag = True
            second_flag = True
            third_flag = True
            dummy = lst.lower()
            for c in dummy:
                if c not in first_row:
                    first_flag = False
                if c not in second_row:
                    second_flag = False
                if c not in third_row:
                    third_flag = False
            if first_flag or second_flag or third_flag:
                answer.append(lst)
        return answer