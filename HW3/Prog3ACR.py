#Adam Roy
#CSCI 265

import math

def numSquare(number):
    val = number**2
    return val

def numSummation(number):
    i = 1
    val = 0
    for i in range(0, number + 1):
        val = val + i
    return val

def sumOfSquares(number):
    i = 1
    val = 0
    for i in range(0, number + 1):
        val = val + numSquare(i)
    return val

def checkIfODD(number):
    if (number % 2) == 0:
        val = bool(False)
        return val
    else:
        val = bool(True)
        return val

def checkIfEVEN(isODD, number):
    if checkIfODD(number) == True:
        val = bool(False)
        return val
    elif checkIfODD(number) == False:
        val = bool(True)
        return val

def multiplicationTable(x, y):
    i = 0
    for i in range(0, y + 1):
        calc = i * x
        print("%2s * %2s = %3d" %(i, x, calc))

def stringOfCount(c, rows, columns, case):
    if(case == 0):
        val = c * rows
        return val
    elif(case == 1):
        for i in range(rows):
            for j in range(columns):
                if (i == 0) or (i == rows - 1) or (j == 0) or (j == columns - 1):
                    print(c, end="")
                else:
                    print(" ", end="")
            print()

def makeRectangle(c, rows, columns):
    case = 1
    stringOfCount(c, rows, columns, case)

    
def main():
    number = int(input("\nEnter number to square: "))
    square = numSquare(number)
    
    number = int(input("\nEnter number to take summation of: "))
    summation = numSummation(number)
    
    number = int(input("\nEnter number to calculate sum of squares: "))
    sumOfSquare = sumOfSquares(number)
    
    number = int(input("\nCheck if number is odd: "))
    isODD = checkIfODD(number)
    
    number = int(input("\nCheck if number is even: "))
    isEVEN = checkIfEVEN(isODD, number)
    
    print("\n-- Enter multiplication table values --")
    multiple = int(input("Enter multiple: "))
    terms = int(input("Enter number of terms: "))
    multiplicationTable(multiple, terms)
    
    print("\n-- Enter string of chars values --")
    character = str(input("Enter character: "))
    times = int(input("Enter times character is printed: "))
    stringOfCount(character, times, 0, 0)
    
    print("\n-- Enter Draw Rectangle Values --")
    character = str(input("Enter Character: "))
    rows = int(input("Enter Rows: "))
    columns = int(input("Enter Columns: "))
    makeRectangle(character, rows, columns)
main()