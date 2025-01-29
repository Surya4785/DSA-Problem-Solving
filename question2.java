//You have a number n and now to need to find the some of the digits of numbers to get a single digit value.
import java.util.Scanner;
public class question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(answer(n));
        sc.close();
    }
    static int answer(int n){
        int sum=0;
        while(n != 0){
            int digit=n%10;
            sum+=digit;
            n=n/10;
        }
        int s=sum;
        int count=0;
        while(s > 0){
            count++;
            s=s/10;
           
        }
        if(count != 1){
           return answer(sum);
        }
        return sum;
    }
}
