# Recebo duas lista1s encadeadas de inteiros (nenhuma é vazia e nenhum número é > 0)
# Preciso pegar os números de cada lista1 e somar como se fosse strings
# list1 = [4,2,1], então fica 421, depois eu inverto ou seja, 124 e somo as duas lista1s. 
# O resultado 124 eu inverto novamente então 421 e adiciono em uma nova lista1 encadeada

class Node:
    def __init__(self, val):
        self.val = val 
        self.next = None 

class LinkedList():
    def __init__(self):
        self.head = None
        self.end = None
        self.size = 0

    def insertAtLast(self, val):
        node = Node(val)
        if self.size == 0:
            self.head = node
        else:
            self.end.next = node
        self.end = node
        self.size += 1


    def printList(self):
        if self.size == 0:
            print("Lista vazia")
            return

        current = self.head
        while current:
            print(current.val, end = ' -> ')
            current = current.next
        print('None')


class Solution:
    def addTwoNumbers(self, l1: LinkedList, l2: LinkedList) -> LinkedList:
        valor1 = ''
        valor2 = ''
        current1 = l1.head
        current2 = l2.head

        while current1 or current2:
            if current1:
                valor1 += str(current1.val)
                current1 = current1.next
            if current2:
                valor2 += str(current2.val)
                current2 = current2.next
        valor1 = str(valor1)[::-1]
        valor2 = str(valor2)[::-1]
        valor_final = int(valor1) + int(valor2)
        valor_final = str(valor_final)[::-1]
        #valor_final = str(valor_final)
        valor_final = list(valor_final)
        
        print(valor_final)

        gummy = LinkedList()
        for x in valor_final:
            x = int(x)
            gummy.insertAtLast(x)
            
        return gummy
        

lista1 = LinkedList()
lista1.insertAtLast(9)
lista1.insertAtLast(9)
lista1.insertAtLast(9)
lista1.insertAtLast(9)
lista1.insertAtLast(9)
lista1.insertAtLast(9)
lista1.insertAtLast(9)



lista2 = LinkedList()
lista2.insertAtLast(9)
lista2.insertAtLast(9)
lista2.insertAtLast(9)
lista2.insertAtLast(9)


app = Solution()
app.addTwoNumbers(lista1, lista2)