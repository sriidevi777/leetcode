class Solution:
    def isSubsequence(self, s, t):
        for i in s:
            f = t.find(i)
            if f == -1:    
                 return False
            else:
                  t = t[f+1:]
        return True
