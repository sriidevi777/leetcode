class Solution:
    def findTheDifference(self, s, t):
        ss = sorted(s)
        ts = sorted(t)
        i = 0
        while i < len(ss) and ss[i] == ts[i]:
            i += 1
        return ts[i]
