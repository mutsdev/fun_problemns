class Solution:
    def truncateSentence(self, s: str, k: int):
        sentence = s.split()
        new_s = ''
        for num in range (k):
            if num == 0:
                new_s += sentence[num]
            else:
                new_s += f' {sentence[num]}'
        return new_s

    def wow(self, s: str, k: int):
        return ' '.join(s.split(' ')[:k])

app = Solution()
string = 'Como vai você'
num = 2
aaa = app.truncateSentence(string, num)
print(aaa)
            