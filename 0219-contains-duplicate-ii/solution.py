class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        d={}
        for index,value in enumerate(nums):
            if value in d and index-d[value]<=k:
                return True
            d[value]=index
        return False
