package function;
import java.util.*;
public class function4{
    public static void main(String[] args) {
        Scanner scan =  new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();
        prime(a,b);
        scan.close();
    }
    static void prime(int x,int y){
        System.out.println("Prime numebr between "+ x + " and " + y + " are :");
        for(int i=x;i<=y;i++){
            int count =0;
            for(int j=2;j<=Math.sqrt(i);j++){
                if(i%j == 0){
                    count ++;
                    break;
                }
            }
            if(count == 0){
                 System.out.print(i+" ");
            }
        }
    }
}
