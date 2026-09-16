class Solution(object):
    def thirdMax(self, nums):
        l=sorted(list(set(nums)),reverse=True)
        if len(l)<3:
            return max(l)
        return l[2]
        
