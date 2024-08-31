class Solution:
    def buildArray(self, nums):
        ans = []
        for i in range(len(nums)):
            ans.append(nums[nums[i]])
        return ans


app = Solution()
array = [0, 1, 2, 3, 4]
permutation_array = app.buildArray(array)
print(permutation_array)