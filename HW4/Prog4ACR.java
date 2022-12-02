import java.util.Scanner;
import java.io.*;

public class Prog4ACR{
    public static int findMaxVal(int arr[], int size){
        int max = arr[0];
        for(int i=0; i<size; i++){
            if(max<arr[i]) max = arr[i];}
        return max;}

    public static int findMinVal(int arr[], int size){
        int min = arr[0];
        for(int i=0; i<size; i++){
            if(min<arr[i]) min = arr[i];}
        return min;}
    
    public static int findFirstOccurance(int arr[], int size, int val){
        for(int i=0; i<size; i++){
            if(arr[i] == val){
                return i;}}
            return -1;}
    
    public static int findLastOccurance(int arr[], int size, int val){
        for(int i = size; i>0; i--){
            if(arr[i] == val){
                return i;}}
            return -1;}
    
    public static float calcAverage(int arr[], int size){
        float average;
        int total = 0;
        for(int i=0; i<size; i++){
            total += arr[i];}
        average = (total / size);
        return average;}

    public static boolean isInList(int arr[], int size, int val){
        for(int i=0; i<size; i++){
            if(arr[i] == val) return true;}
        return false;}

    public static int findNumberAboveAverage(int arr[], int size){
        int count=0;
        float average = calcAverage(arr, size);
        for(int i=0; i<size; i++){
            if(arr[i] > average) count++;}
        return count;}
    
    public static int findNumberBelowAverage(int arr[], int size){
        int count=0;
        float average = calcAverage(arr, size);
        for(int i=0; i<size; i++){
            if(arr[i] < average) count++;}
        return count;}

    public static double standardDeviation(int arr[], int size){
        float totalOfDifSq = 0;
        float avgDifSq = 0;
        float average = calcAverage(arr, size);
        for(int i=0; i<size; i++){
            float x = (arr[i] - average);
            float y = (x*x);
            totalOfDifSq += y;}
        avgDifSq = (totalOfDifSq / size);
        double Sr = Math.sqrt(avgDifSq);
        return Sr;}

    public static void main(String[] args){
        Scanner keyboard;
        keyboard = new Scanner(System.in);
        System.out.println("Enter a file name: ");
        String fileName = keyboard.nextLine();
        File file = null;
        Scanner inFile = null;
        try{
            file = new File (fileName);
            inFile = new Scanner (file);
        }
        catch (FileNotFoundException e){
            System.out.println ("Error opening the file");
            System.out.println ("Actual error message " + e.getMessage());
            System.exit(0);
        }
        int totalLines = 0;
        int[] arr = new int[51];
        while (inFile.hasNextInt()){
            int tempInt = inFile.nextInt();
            arr[totalLines] = tempInt;
            totalLines++;
        }
        inFile.close();
        findMaxVal(arr, totalLines);
        findMinVal(arr, totalLines);
        System.out.println("Enter value to search for: ");
        int val = keyboard.nextInt();
        findFirstOccurance(arr, totalLines, val);
        System.out.println("Enter value to search for: ");
        val = keyboard.nextInt();
        findLastOccurance(arr, totalLines, val);
        calcAverage(arr, totalLines);
        System.out.println("Enter value to search for: ");
        val = keyboard.nextInt();
        isInList(arr, totalLines, val);
        findNumberAboveAverage(arr, totalLines);
        findNumberBelowAverage(arr, totalLines);
        standardDeviation(arr, totalLines);
        keyboard.close();}
    }