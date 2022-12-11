def addEmployee (employeeInfo, employeeName, date):
    if employeeInfo.get(date) != None:
        return False
    else:
        employeeInfo[date] = employeeName
        return True

def findEmployee (employeeInfo, date):
    val = employeeInfo.get(date)
    if val != None:
        return val
    else:
        return ""
    
def findDate (employeeInfo, employeeName):
    i = 0
    while i in range(0, len(employeeInfo)):
        val = employeeInfo.get(i)
        if val == employeeName:
            return i
        i+=1 
    return -1

def totalSignedUp (employeeInfo):
    val = employeeInfo.keys()
    return len(val)

def employeesByDate (employeeInfo, startDate, endDate):
    i = 0
    val = []
    for i in range(startDate, endDate):
        val.append(employeeInfo.get(i))
    return val

def employees (employeeInfo):
    i = 0
    employeeArray = []
    for i in range(0, 30): 
        val = employeeInfo.get(i)
        if val != None:
            employeeArray.append(val)
        i+=1
    return sorted(employeeArray)
    
def printMonth (title, employeeInfo):
    count = 0
    print("%45s" %(title))
    print("""\n       Mon        Tue        Wed        Thu        Fri        Sat        Sun\n""")
    for i in range(1, 30):
        val = employeeInfo.get(i)
        print("%10s" %(val), end=" ")
        if count>=6:
            print("\n")
            count = -1
        count += 1

        
    

#def main():
    #employeeInfo = {1:"Beverly",2:"Kathy",3:"Radell",4:"Gary",5:"Chuck",6:"David",7:"kari",8:"Tom",9:"Tanya",10:"Scott",11:"Beverly",12:"Brenda",13:"Kathy",14:"WenChen",15:"Mike",16:"Emanuel",17:"Linda",18:"Bernie",19:"Hassan",20:"Brian",21:"Eunjin",22:"Jun",23:"Peanut",24:"Travis"}
    #employeeName = str(input("Enter Employee Name: "))
    #date = int(input("Enter Date: "))
    #addEmployee(employeeInfo, employeeName, date)
    #x = findDate(employeeInfo, employeeName)
    #print(x)
    #print(employeeInfo)
    #employees(employeeInfo)
    #title = str(input("Enter a title"))
    #printMonth(title, employeeInfo)
    

#main()