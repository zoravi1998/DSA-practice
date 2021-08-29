class Cake:
    def __init__(self, id, price, size,name):
        self.id = id
        self.price = price
        self.size = size
        self.name = name


class CakeShop:
    def __init__(self,cakeShopName,cakeList):
        self.cakeShopName = cakeShopName
        self.cakeList = cakeList

    def findMinimumCakeBySize(self):
        if(len(self.cakeList) == 0 ):
            return None
        return min(self.cakeList, key=lambda x: x.size)
    
    def sortByCakePrice(self):
        newlist = sorted(self.cakeList, key=lambda x: x.price)
        return newlist
    
def printCake(cakeObject):
    print(cakeObject.id,cakeObject.size,cakeObject.price,cakeObject.size,sep="\n")

if __name__ == '__main__':
    cakeList = []
    cakeShopObject = []
    n = int(input())
    for i in range(n):
        id = input()
        price = int(input())
        size = int(input())
        name = input()
        cakeList.append(Cake(id,price,size,name))

    cakeShopObject = CakeShop("Anuj's Shop",cakeList)
    ob = cakeShopObject.findMinimumCakeBySize()
    if (ob == None):
        print("No Data Found")
    else:
        printCake(cakeShopObject.findMinimumCakeBySize())
        list = cakeShopObject.sortByCakePrice()
        for cake in list:
            print(cake.price)

