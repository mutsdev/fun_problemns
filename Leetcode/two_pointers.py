from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = 1
        for r in range (1, len(nums)):
            if nums[r] != nums[r-1]:
                nums[l] = nums[r]
                l += 1
        return l


nums = [1, 1, 2, 3, 3, 5, 5, 7, 7, 8, 9, 9, 9, 9]

test = Solution()
a = test.removeDuplicates(nums)
print(a)