class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        dur = duration
        siz = len(timeSeries) - 1
        for i in range(0, siz):
            if timeSeries[i] + duration > timeSeries[i+1]:
                dur += timeSeries[i+1] - timeSeries[i]
            else:
                dur += duration
        return dur