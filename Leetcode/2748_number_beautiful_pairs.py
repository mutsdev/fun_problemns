from typing import List
from math import gcd

class Solution:
    def countBeautifulPairs_entendi_errado(self, nums: List[int]) -> int:
        lenght = len(nums)
        beautiful_pairs = 0

        for i in range(lenght - 1):
            for j in range(i + 1, lenght):
                a = nums[i]
                b = nums[j]
                math_gcd = gcd(a, b)
                print(f'GCD entre {a}, {b} -> {math_gcd}')
                if math_gcd == 1:
                    beautiful_pairs += 1
                    print(f'Beatiful pairs = {beautiful_pairs}')
                j += 1
        return beautiful_pairs

    def countBeautifulPairs(self, nums: List[int]) -> int:
        length = len(nums)
        beautiful_pairs = 0

        def first_digit(n):
            while n >= 10:
                n //= 10
            return n

        def last_digit(n):
            return n % 10

        def first_digit_string(n):
            return int(str(n)[0])
        
        def last_digit_string(n):
            return int(str(n)[-1])

        for i in range(length - 1):
            for j in range(i + 1, length):
                a = first_digit_string(nums[i])
                b = last_digit_string(nums[j])
                math_gcd = gcd(a, b)
                print(f'GCD entre {a}, {b} -> {math_gcd}')
                if math_gcd == 1:
                    beautiful_pairs += 1
                    print(f'Beatiful pairs = {beautiful_pairs}')
                j += 1
        return beautiful_pairs

    def countBeautifulPairs_solution2(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0
        for i in range(n):
            for j in range(i+1, n):
                x = int(str(nums[i])[0])
                y = int(str(nums[j])[-1])
                if gcd(x, y) == 1:
                    ans += 1
        return ans


app = Solution()
array = [11,21,12]
print(app.countBeautifulPairs(array))