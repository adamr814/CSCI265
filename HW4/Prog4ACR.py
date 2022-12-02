#Adam Roy
#CSCI 265

import os
import math

def findMaxValue(arr, size):
    temp = arr[0]
    for i in range(1, size):
        if arr[i] > temp:
            temp = arr[i]
    return temp

def findMinValue(arr, size):
    temp = arr[0]
    for i in range(1, size):
        if arr[i] < temp:
            temp = arr[i]
    return temp    

def findFirstOccurance(arr, size, val):
    for i in range(0, size):
        if arr[i] == val:
            return i
    return -1

def findLastOccurance(arr, size, val):
    for i in range(size -1, -1, -1):
        if arr[i] == val:
            return i
    return -1

def calcAverage(arr, size):
    average = float(0)
    total = 0
    for i in range(0, size):
        total = total + arr[i]
    average = (total / size)
    return average

def isInList(arr, size, val):
    for i in range(0, size):
        if arr[i] == val:
            return True
    return False

def findNumberAboveAverage(arr, size):
    count = 0
    average = float(calcAverage(arr, size))
    for i in range(0, size):
        if arr[i] >= average:
            count += 1
    return count

def findNumberBelowAverage(arr, size):
    count = 0
    average = float(calcAverage(arr, size))
    for i in range(0, size):
        if arr[i] < average:
            count += 1
    return count

def standardDeviation(arr, size):
    totalOfDifSq = float(0) #value contains the totals of all values after finding the difference
    avgDifSq = float(0)
    average = float(calcAverage(arr, size))
    for i in range(0, size):
        x = float(arr[i] - average)
        y = float(x*x)
        totalOfDifSq += y
    avgDifSq = float(totalOfDifSq / size)
    Sr = math.sqrt(avgDifSq)
    return Sr


def main():
    i = 0
    arr = []
    f = input("Enter input file name: ")
    if not os.path.isfile(f):
        print("Error opening input file") #Needs to have an actual directory loaction of the input file unless using wing (I was pulling my hair out because vscode makes subfolders)
        os._exit(0)
    file = open(f, 'r')
    lines = file.readlines()
    for i in range(0, len(lines)):
        temp = int(lines[i].strip("\n"))
        arr.append(temp)
        i+=1
    file.close()
    findMaxValue(arr, i)
    findMinValue(arr, i)
    val = int(input("Enter value to search for: "))
    findFirstOccurance(arr, i, val)
    val = int(input("Enter value to search for: "))
    findLastOccurance(arr, i, val)
    calcAverage(arr, i)
    val = int(input("Enter value to search for: "))
    isInList(arr, i, val)
    findNumberAboveAverage(arr, i)
    findNumberBelowAverage(arr, i)
    standardDeviation(arr, i)
    sdev = standardDeviation(arr, i)
    print("%.3f" %(sdev))

main()