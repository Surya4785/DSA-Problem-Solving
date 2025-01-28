package function;
//define a program to find whether a function is even or odd
import java.util.*;
public class function2 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num =  scan.nextInt();
        even_odd(num);
        scan.close();
    }
    static void even_odd(int n){
        if(n%2 == 0){
            System.out.println("EVEN NUMBER");
        }
        else{
            System.out.println("ODD NUMBER");
        }
    } 
}
