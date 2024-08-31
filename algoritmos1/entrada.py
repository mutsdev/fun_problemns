import random
for i in range(55):  # 55 jogadores
    idade = random.randint(15, 30)
    peso = random.randint(60, 100)
    altura = random.randint(160, 190)
    print(f"{idade} {peso} {altura}")