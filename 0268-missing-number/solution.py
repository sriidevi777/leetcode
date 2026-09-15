class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)
        ns = n * (n + 1) // 2 
        return ns - sum(nums)
