def calcTime():
    tsec = int(input("Enter Time: "))
    hours = tsec // 3600
    minutes = (tsec - (hours * 3600)) // 60
    seconds = (tsec % 60)
    return "This is: %d Hours, %02d Minutes, %02d Seconds" % (hours, minutes, seconds)
    
def calcMoney():
    q = int(input("Enter Quarters:"))
    d = int(input("Enter Dimes   :"))
    n = int(input("Enter Nickles :"))
    p = int(input("Enter Pennies :"))
    total = float(0)
    total = (total + (q * 25) + (d * 10) + (n * 5) + (p * 1))/100
    return "This is: $%.2f" %(total)

def formatText():
    f = input("Enter First Name: ")
    l = input("Enter Last Name: ")
    a = input("Enter Address: ")
    c = input("Enter City: ")
    s = input("Enter State: ")
    z = input("Enter Zipcode: ")
    s = s.upper()

    #Method 1
    print("%s %s\n%s\n%s,  %s %s" %(f, l, a, c, s, z))

    #Method 2
    print("%s " %(f), end='')
    print("%s\n" %(l), end='')
    print("%s\n" %(a), end='')
    print("%s, " %(c), end='')
    print("%s  "%(s), end='')
    print("%s"%(z), end='')

def main():
    while(c != 4):
        print("1. Calculate Time From Seonds\n")
        print("2. Calculate Money From Change\n")
        print("3. Print Formatted Text\n")
        print("4. Exit Program\n\n")
        c = input()
        if c == 1:
            calcTime()
        if c == 2:
            calcMoney()
        if c == 3:
            formatText()
        if c == 4:
            print("Exiting Program")

main()