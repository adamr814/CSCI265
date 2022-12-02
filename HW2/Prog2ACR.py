# Adam Roy
# CSCI 265
# Program 2 Python

def calcGPA(credits, grade):
    if (grade == "A"):
        return credits * 4
    elif(grade == "B"):
        return credits * 3
    elif(grade == "C"):
        return credits * 2
    elif(grade == "D"):
        return credits

def main():
    cGrade = None
    i = 0; aCredit = 0; pCredit = 0; tCredit = 0; numClasses = 0; pClass = 0; cCredit = 0
    honorCredits = float(0)
    semGPA = float(0)
    numClasses = int(input("Enter the number of classes you took: "))
    while(numClasses != i):
        cName = input("Enter the name of the class: ")
        cCredit = int(input("How many credits is it worth: "))
        cGrade = input("What grade did you get in this class: ")
        cGrade = cGrade.upper()
        aCredit += cCredit
        if(cGrade != "F"):
            pClass += 1
            pCredit += cCredit
            x = calcGPA(cCredit, cGrade)
            honorCredits += x
        i += 1
    semGPA = (honorCredits / aCredit)
    print("GPA: %20.3f\nCredits attempted%8d\nCredits passed%11d\nClasses attempted%8d\nClasses passed%11d" %(semGPA, aCredit, pCredit, numClasses, pClass))
main()