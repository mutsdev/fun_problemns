# Preciso juntar duas int linked lists, e deixar ela em ordem crescente, por exeplo 
# lista1 = [1, 4, 5] e lista2 = [2, 4, 10, 11], resultado = [1, 4, 4, 5, 10, 11]

class ListNode:
    def __init__(self):
        self.head = None
        self.end = None
        self.size = 0

    def insertAtBegin(self, val):
        node = Node(val)
        if self.size == 0:
            self.end = node
        else:
            node.next = self.head
        self.head = node
        self.size += 1

    def insertAtLast(self, val):
        node = Node(val)
        if self.size == 0:
            self.head = node
        else:    
            self.end.next = node
        self.end = node
        self.size += 1

    def insertAtIndex(self, index, val):
        if index > self.size:
            print("Esse index é inválido")
            return  
        elif index == 0: 
            self.insertAtBegin(val)
            return
        elif index == self.size:
            self.insertAtLast(val)
            return

        node = Node(val)
        current = self.head

        for i in range(index-1): # -1 Por que o último já foi adicionado la em cima
            current = current.next

        node.next = current.next
        current.next = node
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

class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

lista1 = ListNode()


lista2 = ListNode()



class Solution: 
    # Fiz esse método totalmente do 0, sem olhar em local algum
    def mergeTwoLists(self, list1: ListNode, list2: ListNode): 
        mergeList = ListNode()
        current1 = list1.head
        current2 = list2.head
        merge_size = lista1.size + lista2.size
        i = 0
        while i <= merge_size - 1:
            while current1 and current2:
                if current1.val <= current2.val:
                    mergeList.insertAtLast(current1.val)
                    current1 = current1.next
                else: 
                    mergeList.insertAtLast(current2.val)
                    current2 = current2.next
                i += 1
            if current1:
                print(f"Valor do current1 -> {current1.val}")
                mergeList.insertAtLast(current1.val)
                if current1.next:
                    current1 = current1.next
            if current2:
                print(f"Valor do current2 -> {current2.val}")
                mergeList.insertAtLast(current2.val)
                if current2.next:
                    current2 = current2.next
            i += 1
        return mergeList

    # Sugestão do chatgpt
    def mergeTwoLists2(self, list1: ListNode, list2: ListNode):
        mergeList = ListNode()
        current1 = list1.head
        current2 = list2.head

        while current1 and current2:
            if current1.val <= current2.val:
                mergeList.insertAtLast(current1.val)
                current1 = current1.next
            else:
                mergeList.insertAtLast(current2.val)
                current2 = current2.next

        # Adicionar os elementos restantes de current1
        while current1:
            mergeList.insertAtLast(current1.val)
            current1 = current1.next

        # Adicionar os elementos restantes de current2
        while current2:
            mergeList.insertAtLast(current2.val)
            current2 = current2.next

        return mergeList

app = Solution()
megan_fox = app.mergeTwoLists(lista1, lista2)
megan_fox.printList()
