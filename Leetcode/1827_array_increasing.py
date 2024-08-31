from typing import List

class Solution:
    def minOperations_error_because_limit_operations(self, nums):
        operations = 0
        print(len(nums))
        for i in range(len(nums)):
            print(nums)
            if i != 0:
                while nums[i] <= nums[i-1]:
                    nums[i] += 1
                    operations += 1
        print(nums)
        print(operations)
        return operations

    def minOperations(self, nums: List[int]) -> int:
        operations = 0
        previous = nums[0]  

        for i in range(1, len(nums)):
            if nums[i] <= previous:            
                operations += previous - nums[i] + 1
                previous += 1  
                print(previous)
            else:
                previous = nums[i] 
        return operations
         
app = Solution()
nums = [29, 10, 1]
operations = app.minOperations(nums)
if operations == 3:
    print('Deu certo')
else:
    print('Deu merda')