package function;
import java.util.Scanner;
// define two method to print the maximum and the minimum number respectively among three numbers entered by the user.
public class function1 {
    public static void main(String[] args) {
        Scanner scan =  new Scanner(System.in);
        System.out.println("Enter the three numbers:");
        int n1 = scan.nextInt();
        int n2 = scan.nextInt();
        int n3 = scan.nextInt();
        max(n1,n2,n3);
        min(n1, n2, n3);
        scan.close();   
    }
    static void max(int a, int b, int c){
        if(a>b){
            if(a>c){
                System.out.println(a + " is maximum numnber");
            }
            else{
                System.out.println(c + " is maximun number");
            }
        }
        else{
            if(b>c){
                System.out.println(b +" is maximum number");
            }
            else{
                System.out.println(c + " is maximum number");
            }
        }
    }
    static void min(int a, int b, int c){
            if(a<b){
                if(a<c){
                    System.out.println(a + " is minimum numnber");
                }
                else{
                    System.out.println(c + " is minimun number");
                }
            }
            else{
                if(b<c){
                    System.out.println(b +" is minimum number");
                }
                else{
                    System.out.println(c + " is minimum number");
                }
            }
        }
}
