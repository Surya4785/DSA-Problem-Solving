//voting eligiblity
package function;
import java.util.*;
public class function3 {
    public static void main(String[] args) {
        Scanner scan =  new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = scan.nextInt();
        vote(age);
        scan.close();  
    }    
    static void vote(int a){
        if(a>=18){
            System.out.println("YOur can vote");
        }
        else{
            System.out.println("You can't vote");
        }
    }
}
