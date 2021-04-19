# S[head=Node(1), tail=None ]
# S[head=Node(1), tail=Node(2) ]

class Node:
    def __init__(self, data):
        self.prev = None
        self.next = None
        self.data = data

class Singly:
    def __init__(self, data):
        self.head = Node(data=data)
        self.tail = None
        
    def insert(self, data):
        node = Node(data=data)
        if self.tail != None:
            self.tail.next = node
        else:
            self.head.next = node
        self.tail = node

    def find(self, data):
        pass

    def length(self):
        pass
    
    def print(self):
        temp = self.head
        while temp:
            print(temp.data)
            temp = temp.next


numbers = Singly(data=5)
numbers.insert(data=9)
numbers.insert(data=3)
numbers.insert(data=2)
numbers.insert(data=1)
numbers.insert(data=6)
numbers.insert(data=7)


numbers.print()