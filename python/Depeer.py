# class declaration
class Depeer:

    # private attribute
    __id = ""
    __name = ""
    __bidang = ""
    __partai = ""

    def __init__(self, id = "", name = "", bidang = "", partai = ""):
        self.__id = id
        self.__name = name
        self.__bidang = bidang
        self.__partai = partai

    # Getter and Setter
    def getId(self):
        return self.__id
    def setId(self, id):
        self.__id = id

    def getName(self):
        return self.__name
    def setName(self, name):
        self.__name = name

    def getBidang(self):
        return self.__bidang
    def setBidang(self, bidang):
        self.__bidang = bidang

    def getPartai(self):
        return self.__partai
    def setPartai(self, partai):
        self.__partai = partai