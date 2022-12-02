//Adam Roy
//CSCI 265

import java.util.Scanner;

public class Prog3ACR{
    public static double numSquare(int number){
        double val = Math.pow(number, 2);
        return val;
    }

    public static int numSummation(int number){
        int i;
        int val = 0;
        for(i = 1; i > number; i++){
            val = (val + i);}
        return val;}

    public static double sumOfSquares(int number){
        int i;
        double val = 0;
        for(i = 1; i > (number + 1); i++){
            val = val + numSquare(i);}
        return val;}
    
    public static boolean checkIfODD(int number){
        if (number % 2 == 1){
            return true;}
        return false;}

    public static boolean checkIfEVEN(int number){
        if (checkIfODD(number) == true){
            return false;}
        return true;}
    
    public static void multiplicationTable(int multiple, int terms){
        for (int i = 0; i <= terms; i++){
            int calc = (i * multiple);
            System.out.format("%2d * %2d = %3d\n", multiple, i, calc);}}
        
    public static String stringOfCount(char ch, int c){
        String s1 = Character.toString(ch);
        String s2 = "";
        for(int i = 0; i < c; i++){
                String temp = s2.concat(s1);
                s2 = temp;}
        return s2;}
    
    public static void makeRectangle(int co, int r, char ch){
        String makeStringOfCount = stringOfCount(ch, co);
        for(int i = 1; i <= r; i++){
            if(i == 1 || i == r){
                System.out.format("%s\n", makeStringOfCount);}
            else{
                int j = 0;
                while(j != co){
                    if(j == 0 || j == co-1){
                        System.out.format("%s", ch);}
                    else{
                        System.out.print(" ");}
                    j++;}
                System.out.print("\n");}}}

    public static void main(String[] args){
        int number, multiple, terms, r, co;
        char ch;
        Scanner value = new Scanner(System.in);
        System.out.print("Enter value to square: ");
        number = value.nextInt();
        numSquare(number);

        System.out.print("Enter value to sum: ");
        number = value.nextInt();
        numSummation(number);

        System.out.print("Enter number to calculate sum of squares: ");
        number = value.nextInt();
        sumOfSquares(number);

        System.out.print("Check if number is odd: ");
        number = value.nextInt();
        checkIfODD(number);

        System.out.print("Check if number is even: ");
        number = value.nextInt();
        checkIfEVEN(number);

        System.out.print("\n-- Enter multiplication table values --\n");
        System.out.print("Enter multiple: ");
        multiple = value.nextInt();
        System.out.print("Enter number of terms: ");
        terms = value.nextInt();
        multiplicationTable(multiple, terms);

        System.out.print("\n-- Enter draw rectangle values --\n");
        System.out.print("Enter character: ");
        ch = value.next().charAt(0);
        System.out.print("Enter rows: ");
        r = value.nextInt();
        System.out.print("Enter columns: ");
        co = value.nextInt();
        makeRectangle(co, r, ch);

        value.close();}}
    
    
