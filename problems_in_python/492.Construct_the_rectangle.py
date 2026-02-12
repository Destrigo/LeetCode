import math


class Solution:
    def constructRectangle(self,
                           area: int
                           ) -> list[int]:
        lenght = 0
        b = int(math.sqrt(area))
        while area % b != 0:
            b -= 1
        lenght = area//b
        return [lenght, b]
