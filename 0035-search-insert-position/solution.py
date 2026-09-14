class Solution(object):
    def searchInsert(self, nums, target):
        nums.append(target)
        for i, num in enumerate(sorted(list(set(nums)))):
            if num == target:
                return i
