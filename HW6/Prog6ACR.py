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
    val = employeeInfo.get(employeeName)
    if val != None:
        return val
    else:
        return ""   

def totalSignedUp (employeeInfo):
    val = employeeInfo.keys()
    return len(val)

#def employeesByDate (employeeInfo, startDate, endDate):
    
#def employees (employeeInfo):
    
#def printMonth (title, employeeInfo):

def main():
    employeeInfo = {1:"Beverly",2:"Kathy",3:"Radell",4:"Gary",5:"Chuck",6:"David",7:"kari",8:"Tom",9:"Tanya",10:"Scott",11:"Beverly",12:"Brenda",13:"Kathy",14:"WenChen",15:"Mike",16:"Emanuel",17:"Linda",18:"Bernie",19:"Hassan",20:"Brian",21:"Eunjin",22:"Jun",23:"Peanut",24:"Travis"}
    employeeName = str(input("Enter Employee Name: "))
    date = int(input("Enter Date: "))
    #addEmployee(employeeInfo, employeeName, date)
    x = findDate(employeeInfo, employeeName)
    print(x)
    #print(employeeInfo)
    

main()