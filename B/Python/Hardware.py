from Product import Product

class Hardware(Product):
    __brand = ""
    __model = ""
    
    def __init__(self):
        self.__brand = ""
        self.__model = ""
    
    def setBrand(self, b):
        self.__brand = b
    
    def getBrand(self):
        return self.__brand
    
    def setModel(self, m):
        self.__model = m
    
    def getModel(self):
        return self.__model