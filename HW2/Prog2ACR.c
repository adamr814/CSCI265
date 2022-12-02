//Adam Roy
//CSCI 265
//Program 2 C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcGPA(int credits, char grade){
    if(grade == 'A'){
        return credits * 4;}
    else if(grade == 'B'){
        return credits * 3;}
    else if(grade == 'C'){
        return credits * 2;}
    else if(grade == 'D'){
        return credits;}}

int main(){
    char cName[15], cGrade;
    int i=0, aCredit=0, pCredit=0, tCredit=0, numClasses=0, pClass=0, cCredit=0;
    float x, honorCredits=0, semGPA=0;
    printf("Enter the number of classes you took: ");
    scanf("%d", &numClasses);
    while(i < numClasses){
        printf("Enter the name of the class: ");
        scanf("%s", &cName);
        fflush(stdin);
        printf("How many credits is it worth: ");
        scanf("%d", &cCredit);
        fflush(stdin);
        printf("What grade did you get in this class: ");
        scanf("%s", &cGrade);
        fflush(stdin);
        printf("\n");
        if(cGrade == 'a'){cGrade = 'A';}
        if(cGrade == 'b'){cGrade = 'B';}
        if(cGrade == 'c'){cGrade = 'C';}
        if(cGrade == 'd'){cGrade = 'D';}
        if(cGrade == 'f'){cGrade = 'F';}
        aCredit += cCredit;
    if(&cGrade != "F"){
        pClass ++;
        pCredit += cCredit;
        x = calcGPA(cCredit, cGrade);
        honorCredits += x;}
    i++;
    }
    semGPA = (honorCredits / aCredit);
    printf("GPA: %20.3f\nCredits attempted%8d\nCredits passed%11d\nClasses attempted%8d\nClasses passed%11d",semGPA, aCredit, pCredit, numClasses, pClass);
    exit(0);
}