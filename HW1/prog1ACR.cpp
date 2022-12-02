#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void calcTime(){
    int tsec, hours, minutes, seconds;
    cout << "Enter Time in Seconds: ";
    cin >> tsec;
    hours = floor(tsec/3600);
    minutes = floor((tsec - (hours * 3600))/60);
    seconds = tsec % 60;
    cout << "This is: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
}

void calcMoney(){
    int q, d, n, p;
    float total = 0;
    cout <<  "Enter #of quarters: ";
    cin >> q;
    cout << "Enter #of dimes: ";
    cin >> d;
    cout << "Enter #of nickles: ";
    cin >> n;
    cout << "Enter #of pennies: ";
    cin >> p;

    total = (q * 0.25)+(d * 0.10)+(n * 0.05)+(p * 0.01);
    printf("This is: $%.2f\n", total);
}

void formatText(){
    char fName[20], lName[20], inAdd[20], inCty[20], inSt[20], inZip[20];
    printf("Enter First Name: ");
    fflush(stdin);
    fgets(fName, sizeof fName, stdin);
    fName[strcspn(fName, "\n")] = 0;

    printf("Enter Last Name: ");
    fflush(stdin);
    fgets(lName, sizeof lName, stdin);
    lName[strcspn(lName, "\n")] = 0;

    printf("Enter Address: ");
    fflush(stdin);
    fgets(inAdd, sizeof inAdd, stdin);
    inAdd[strcspn(inAdd, "\n")] = 0;

    printf("Enter City: ");
    fflush(stdin);
    fgets(inCty, sizeof inCty, stdin);
    inCty[strcspn(inCty, "\n")] = 0;

    printf("Enter State: ");
    fflush(stdin);
    fgets(inSt, sizeof inSt, stdin);
    inSt[strcspn(inSt, "\n")] = 0;

    printf("Enter Zip Code: ");
    fflush(stdin);
    fgets(inZip, sizeof inZip, stdin);
    inZip[strcspn(inZip, "\n")] = 0;
    //Print with one line
    printf("\n%s %s\n%s\n%s, %s  %s\n\n", fName, lName, inAdd, inCty, inSt, inZip);
    //Print with six lines
    printf("%s ", fName);
    printf("%s\n", lName);
    printf("%s\n", inAdd);
    printf("%s, ", inCty);
    printf("%s  ", inSt);
    printf("%s\n\n", inZip);
}

int main(){
    int c;
    do{
    /* Prints Menu */
    printf("1. Calculate Time From Seonds\n");
    printf("2. Calculate Money From Change\n");
    printf("3. Print Formatted Text\n");
    printf("4. Exit Program\n\n");
    scanf("%d", &c);

    /* Selects a function based on choice */
    if(c == 1){
        calcTime();}
    else if(c == 2){
        calcMoney();}
    else if(c == 3){
        formatText();}
    else if(c == 4){
        printf("Exiting Program\n");}
    else
        printf("Not a valid option\n");
    } while (c != 4);
    return 0;
};