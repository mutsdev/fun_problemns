class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            print('teste')
            return False

        x = str(x)
        lista = list()
        lista[:0] = x

        if lista[0] == lista[-1] and len(lista) <= 3:
            return True
        return False


app = Solution()
app.isPalindrome(121)