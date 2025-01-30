import java.util.Scanner;
public class reverse_of_string {
    public static void main(String[] args) {
        Scanner scan =new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = scan.next();
        String rev ="";
        for(int i=0;i<str.length();i++){
            char ch = str.charAt(str.length() - 1 - i);
            rev += ch;
        }
        System.out.println("Reverse of string is " + rev);
        scan.close();
    }
}
