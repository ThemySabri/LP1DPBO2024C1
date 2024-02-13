# Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
# Demi keberkahan-Nya, saya berjanji mengerjakan
# latihan praktikum 1 DPBO dengan jujur dan
# tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

class Human:
    def __init__(self, id=0, name="", bidang="", partai=""):
        self.id = id
        self.name = name
        self.bidang = bidang
        self.partai = partai

    def getID(self):
        return self.id

    def setID(self, id):
        self.id = id

    def getName(self):
        return self.name

    def setName(self, name):
        self.name = name

    def getBidang(self):
        return self.bidang

    def setBidang(self, bidang):
        self.bidang = bidang

    def getPartai(self):
        return self.partai

    def setPartai(self, partai):
        self.partai = partai
