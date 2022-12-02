import java.util.Scanner;
public class prog1ACR {
public static void main(String[] args)
    {
        System.out.print("\n\n\n************  Calculate Time Program ************\n\n\n");
        
        Scanner time = new Scanner(System.in);
        System.out.print("Enter Time: ");
	    	int seconds = time.nextInt();
        int S = seconds % 60;
        int H = seconds / 60;
        int M = H % 60;
        H = H / 60;
        System.out.print( "This is: " + H + " Hours " + M + " Minutes " + S + " Seconds ");
		System.out.print("\n");
        time.close();
		
		System.out.print("\n\n\n************  Calculate Money Program ************\n\n\n");
		
		Scanner money = new Scanner(System.in);
        System.out.print("Enter Quarters: ");
        int quarters = money.nextInt();
        System.out.print("Enter Dimes: ");
        int dimes = money.nextInt();
        System.out.print("Enter Nickles: ");
        int nickles = money.nextInt();
        System.out.print("Enter Pennies: ");
        int pennies = money.nextInt();
        float q = (quarters * 25);
        float d = (dimes * 10);
        float n = (nickles * 5);
        float p = pennies;
        
        float total = (q + d + n + p)/100;
	    System.out.print("This is: $" + total);
		System.out.print("\n");
        money.close();
		
		System.out.print("\n\n\n************  Format Text Program  ************");

        Scanner text = new Scanner(System.in);
        System.out.print("Enter First Name: ");
        String fName = text.nextLine();
        System.out.print("Enter Last Name: ");
        String lName = text.nextLine();
        System.out.print("Enter Address: ");
        String inAdd = text.nextLine();
        System.out.print("Enter City: ");
        String inCity = text.nextLine();
        System.out.print("Enter State: ");
        String inSt = text.nextLine();
        System.out.print("Enter Zip Code: ");
        String zipC = text.nextLine();
        text.close();

        System.out.println(fName + " " + lName + "\n" + inAdd + "\n" + inCity + ", " + inSt + "  " + zipC);
        System.out.println(fName + " ");
        System.out.println(lName + "\n");
        System.out.println(inAdd + "\n");
        System.out.println(inCity + ", ");
        System.out.println(inSt + "  ");
        System.out.println(zipC);
 }}
