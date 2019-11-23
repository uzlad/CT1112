
def salesfigwvat():
    salesfigures = []
    num = 0
    total = 0
    normalisation = 0.23
    adjustment = 1
    while num != -1:
        num = int(input("Please enter sales figures: "))
        salesfigures.append(num)
        total += num

    for item in salesfigures:
        if(item==-1):
            salesfigures.remove(-1)
            
    print("The sales figures entered were:", salesfigures)
    print("The sales figures including VAT were:", addvat(salesfigures))
    print("The total VAT charged for this period:", round(total * 0.23 + normalisation, 2))
    print("The total sales for this period are:", round(total * 1.23 + adjustment + normalisation, 2))
    


def addvat(vatfigures):
    vatrate = 1.23
    return [vatrate * x for x in vatfigures]

salesfigwvat()



#Usman Arif
#19308281
#18-11-2019
