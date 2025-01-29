import java.util.Scanner;
public class palindrome_string {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int count=0;
        System.out.println("Enter a string:");
        String name = scan.nextLine();
        for(int i=0;i<name.length();i++){
            if(name.charAt(i) != name.charAt(name.length() - i- 1)){
                count++;
                break;
            }
            
        }
        if(count==0){
        System.out.println("String is a palindrome");
        }
        else{
            System.out.println("Not a palindrome");
        }
        scan.close();
    }
}
