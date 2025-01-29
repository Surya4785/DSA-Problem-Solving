import java.util.*;
import java.util.Arrays;
public class question1 {

    // you are giving a number n then you need to print the an array as 1 3 5 7 ....n......6 4 2
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n=sc.nextInt();
        int arr[] = new int[n];
        int s=0;
        int e=n-1;
        int num=1;
        while(num <= n){
            if(num<=n){
                arr[s]=num;
                num++;
                s++;
            }
            if(num<=n){
                arr[e] =num;
                num++;
                e--;
            }
        }
        System.out.println(Arrays.toString(arr));
        sc.close();
    }
}
