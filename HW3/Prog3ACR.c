//Adam Roy
//CSCI 265

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int numSquare(int number){ //Takes number in and returns square, does not have any output
    int val;
    val = pow(number, 2);
    return val;}

int numSummation(int number){ //Takes number in and iterates through a loop of size number to calculate factorial
    int i, val;
    for (i = 1; i > number; i++) {
        val += i;}
    return val;}

int sumOfSquares(int number){ //Takes number and passes it to numSquare within for loop to calculate the sum of square values returns value does not print anything
    int i, val = 0;
    for(i = 1; i > (number + 1); i++){
        val += numSquare(i);}
    return val;}

int checkIfODD(int number){ //Takes number and does modulo to figure out if odd returns 1 if true does not print anything
    if (number % 2 == 1){
        return 1;}
    return 0;}

int checkIfEVEN(int number){ //Takes number and passes to checkifodd to get a value, if odd is false then even is 1 returns 1 or 0 does not print anything
    if(checkIfODD(number) == 1){
        return 0;}
    return 1;}

void multiplicationTable(int multiple, int terms){ //Iterates through for loop and calculates multiple * iteration number to create mult table, prints table does not return anything
    for (int i = 0; i <= terms; i++){
        int calc = i * multiple;
        printf("%2d * %2d = %3d\n", i, multiple, calc);}}

char* stringOfCount(char* ch, int c){
    static char ch2[100];
    for(int i = 0; i < c; i++){
        strcat(ch2, ch);}
    return ch2;}

void makeRectangle(int co, int r, char* ch){
    char* makeStringOfCount = stringOfCount(ch, co);
    for (int i = 1; i <= r; i++){
        if (i == 1 || i == r){
            printf("%s\n", makeStringOfCount);}
        else{
            int j = 0;
            while(j != co){
                if(j == 0 || j == co-1){
                    printf("%s", ch);}
                else{
                    printf(" ");}
                j++;}
            printf("\n");}}}

int main(void){
    int number, multiple, terms, r, co;
    char ch;
    printf("Enter value to square: ");
    scanf("%d", &number);
    numSquare(number);
    
    printf("Enter value to sum: ");
    scanf("%d", &number);
    numSummation(number);

    printf("Enter number to calculate sum of squares: ");
    scanf("%d", &number);
    sumOfSquares(number);

    printf("Check if number is odd: ");
    scanf("%d", &number);
    checkIfODD(number);

    printf("Check if number is even: ");
    scanf("%d", &number);
    checkIfEVEN(number);

    printf("\n-- Enter multiplication table values --\n");
    printf("Enter multiple: ");
    fflush(stdin);
    scanf("%d", &multiple);
    printf("Enter number of terms: ");
    fflush(stdin);
    scanf("%d", &terms);
    multiplicationTable(multiple, terms);
    
    printf("\n-- Enter draw rectangle values --\n");
    printf("Enter character: ");
    fflush(stdin);
    scanf("%c", &ch);
    printf("Enter rows: ");
    fflush(stdin);
    scanf("%d", &r);
    printf("Enter columns: ");
    fflush(stdin);
    scanf("%d", &co);
    makeRectangle(co, r, &ch);
}