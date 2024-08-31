# Preciso convertes números inteiros para números romanos
# Na minha cabeça esta fazendo sentido a lógica de tentar dividir o número do maior para o menor, ou seja
# 1921, tento dividir por M = 1000, se o resultado da divisão for maior que 0, adiciono M na minha sequência numérica e o valor agora é 
# 1921 - 1000 = 921, como nesse caso o resultado foi menor que 0 eu faço a seguinte verficação
# Se for menor que 0,9 divido pelo próximo número romano, se for maior ou igual irei fazer a subtração pelo número que eu dividi - o próximo valor menor que o número que eu divide que seja multiplo de 10
# Nesse caso, 921 / 1000 = 0,92 >= 0,9, logo, vou adicionar CM na minha sequência e subtrair 921 - 900
# 921 - 900 = 21, então eu volto la para o começo do código e vou fazer 
# 21 / 1000 < 0,9 , 21 / 500 < 0,9 , 21 / 100 < 0,9 , 21 / 50 < 0,9 , 21 / 10 > 0
# adiciono x na minha sequência e faço a subtração 21 - 10 = 11
# faço a mesma lógica e chego em 11/10 > 0, logo 11 - 10 = 1 e adiciono x a minha sequência
# repito novamente e chego em 1/1 > 0, logo 1 -1 e adiciono I na minha sequência 
# Tendo como resultado final MCMXXI


class Solution:
    def intToRoman(self, num:int) -> str:
        roman_num= ''

        while True:
            
            if num == 0:
                break
            if num >= 900:
                if num >= 1000: 
                    num -= 1000
                    roman_num += 'M'
                else: 
                    num -= 900
                    roman_num += 'CM'
                continue
            elif num >= 400:
                if num >= 500:
                    num -= 500
                    roman_num += 'D'
                else:
                    num -= 400
                    roman_num += 'CD'  
                continue 

            elif num >= 90:
                if num >= 100:
                    num -= 100
                    roman_num += 'C'
                else: 
                    num -= 90
                    roman_num += 'XC'
                continue
            
            elif num >= 40:
                if num >= 50:
                    num -= 50
                    roman_num += 'L'
                else: 
                    num -= 40
                    roman_num += 'XL'
                continue
            
            elif num >= 9:
                if num >= 10:
                    num -= 10
                    roman_num += 'X'
                else: 
                    num -= 9
                    roman_num += 'IX'
                continue

            elif num >= 4:
                if num >= 5:
                    num -= 5
                    roman_num += 'V'
                else: 
                    num -= 4
                    roman_num += 'IV'
                continue
            for x in range(num):
                num -= 1 
                roman_num += "I"
        return roman_num

    def intToRoman2(self, num: int) -> str:
        ans = ''
        hmap = {
            1000: 'M',
            900: 'CM',
            500: 'D',
            400: 'CD',
            100: 'C',
            90: 'XC',
            50: 'L',
            40: 'XL',
            10: 'X',
            9: 'IX',
            5: 'V',
            4: 'IV', 
            1: 'I'
        }


        for key, value in hmap.items(): 
            while num >= key: 
                num -= key
                ans += value

        return ans


app = Solution()
nineInRoman = app.intToRoman2(1921)
print(nineInRoman)