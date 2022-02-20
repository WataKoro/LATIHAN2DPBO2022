class Product():
    __id = ""
    __price = 0
    
    def __init__(self):
        self.__id = ""
        self.__price = 0
        
    def setID(self, i):
        self.__id = i
    
    def getID(self):
        return self.__id
    
    def setPrice(self, p):
        self.__price = p
    
    def getPrice(self):
        return self.__price