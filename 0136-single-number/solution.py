class Solution(object):
    def singleNumber(self, nums):
        uniqNum = 0
        for i in nums:
            uniqNum ^= i
        return uniqNum
