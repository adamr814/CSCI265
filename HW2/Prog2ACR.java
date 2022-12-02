//Adam Roy
//CSCI 265
//Program 2 Java

import java.util.Scanner;

public class Prog2ACR{
    public static int calcGPA(int credits, String grade){
        if (grade.equals("A")){
            return credits*4;}
        else if (grade.equals("B")){
            return credits*3;}
        else if (grade.equals("C")){
            return credits*2;}
        else
            return credits;}

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String cGrade;
        int i = 0, aCredit = 0, pCredit = 0, 
        pClass = 0, cCredit = 0, numClasses;
        float honorCredits = 0;
        System.out.println("Enter the number of classes you took: ");
        numClasses = input.nextInt();
        input.nextLine();
        while (numClasses != i){
            i += 1;
            System.out.println("Enter the name of the class: ");
            input.nextLine();
            System.out.println("How many credits is it worth: ");
            cCredit = input.nextInt();
            System.out.println("What grade did you get in this class: ");
            input.nextLine();
            cGrade = input.nextLine().toUpperCase();
            aCredit += cCredit;
            if (!cGrade.equals("F")){
                pCredit += cCredit;
                pClass += 1;
                honorCredits += calcGPA(cCredit, cGrade);}}
        float semGPA = honorCredits / aCredit;
        System.out.format("GPA: %20.3f\nCredits attempted%8d\nCredits passed%11d\nClasses attempted%8d\nClasses passed%11d",
        semGPA, aCredit, pCredit, numClasses, pClass);
        input.close();
    }
}