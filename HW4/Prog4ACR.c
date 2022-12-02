#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int findMaxVal(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if (max < arr[i]) max = arr[i];} //printf("%d", max);
    return max;}

int findMinVal(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if (min > arr[i]) min = arr[i];} //printf("%d", min);
    return min;}

int findFirstOccurance(int arr[], int size, int val){
    for(int i=0; i<size; i++){
        if(arr[i] == val){
            return i;}}
    return -1;}

int findLastOccurance(int arr[], int size, int val){
    for(int i=size; i>0; i--){
        if(arr[i] == val){
            return i;}}
    return -1;}

int calcAverage(int arr[], int size){
    float average;
    int total = 0;
    for(int i=0; i<size; i++){
        total += arr[i];}
    average = (total/size);
    return average;}

int isInList(int arr[], int size, int val){
    for(int i=0; i<size; i++){
        if(arr[i] == val) return 1;}
    return 0;}

int findNumberAboveAverage(int arr[], int size){
    int count=0;
    float average = calcAverage(arr, size);
    for(int i=0; i<size; i++){
        if(arr[i] > average) count++;}
    return count;}

int findNumberBelowAverage(int arr[], int size){
    int count=0;
    float average = calcAverage(arr, size);
    for(int i=0; i<size; i++){
        if(arr[i] < average) count++;}
    return count;}

float standardDeviation(int arr[], int size){
    float totalOfDifSq = 0;
    float avgDifSq = 0;
    float average = calcAverage(arr, size);
    for(int i=0; i<size; i++){
        float x = (arr[i] - average);
        float y = (x*x);
        totalOfDifSq += y;}
    avgDifSq = (totalOfDifSq / size);
    double Sr = sqrt(avgDifSq);
    return Sr;}

int main(void){
    int arr[51];
    int i = 0, val;
    char fileName[20];
    printf("Enter input file name: ");
    scanf("%s", fileName);
    FILE *file;
    file = fopen(fileName, "r");
    if(file == NULL){
        printf("Error opening file");
        return 0;
    }
    while(!feof(file)){
        fscanf(file, "%d", &arr[i]);
        i++;}
    fclose(file);
    findMaxVal(arr, (i-1));
    findMinVal(arr, (i-1));
    printf("Enter value to search for: ");
    scanf("%d", &val);
    /*int x = */findFirstOccurance(arr, (i-1), val); //printf("%d\n", x);
    printf("Enter value to search for: ");
    scanf("%d", &val);
    /*int y = */findLastOccurance(arr, (i-1), val); //printf("%d\n", y);
    calcAverage(arr, (i-1));
    printf("Enter value to search for: ");
    scanf("%d", &val);
    isInList(arr, (i-1), val);
    findNumberAboveAverage(arr, (i-1));
    findNumberBelowAverage(arr, (i-1));
    float sdev = standardDeviation(arr, (i-1));
    printf("%.3f", sdev);
    return 0;}
    
