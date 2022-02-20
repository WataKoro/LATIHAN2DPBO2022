from Hardware import Hardware

class Memory(Hardware):
    __freq = 0
    __memSize = 0
    __supportsCuda = False
    
    def __init__(self):
        self.__freq = 0
        self.__memSize = 0
        self.__supportsCuda = False
    
    def setFreq(self, f):
        self.__freq = f
    
    def getFreq(self):
        return self.__freq
    
    def setMemSize(self, m):
        self.__memSize = m
    
    def getMemSize(self):
        return self.__memSize

    def setCuda(self, c):
        self.__supportsCuda = c
    
    def getCuda(self):
        return self.__supportsCuda