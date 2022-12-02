#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int findMaxVal(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(max<arr[i]) max = arr[i];}
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

float calcAverage(int arr[], int size){
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
    int arr[51], i=0, val;
    char fileName[20];
    cout << "Enter input file name: ";
    cin >> fileName;
    FILE *file;
    file = fopen(fileName, "r");
    if(file == NULL){
        printf("Error opening file");
        return 0;}
    while(!feof(file)){
        fscanf(file, "%d", &arr[i]);
        i++;}
    fclose(file);
    findMaxVal(arr, (i-1));
    findMinVal(arr, (i-1));
    cout << "Enter value to search for: ";
    cin >> val;
    findFirstOccurance(arr, (i-1), val);
    cout << "Enter value to search for: ";
    cin >> val;
    findLastOccurance(arr, (i-1), val);
    calcAverage(arr, (i-1));
    cout << "Enter value to search for: ";
    cin >> val;
    isInList(arr, (i-1), val);
    findNumberAboveAverage(arr, (i-1));
    findNumberBelowAverage(arr, (i-1));
    standardDeviation(arr, (i-1));
    return 0;}