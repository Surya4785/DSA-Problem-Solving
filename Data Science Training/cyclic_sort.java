import java.util.*;
import java.util.Arrays;
public class cyclic_sort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sc.nextInt();
        System.out.println("Enter the elements in the array:");
        int arr[] = new int[size];
        for(int i=0;i<size;i++){
            arr[i] = sc.nextInt(); 
        }
        int i=0;
        while(i<size){
            int correct =arr[i] -1;
            if(arr[i] != arr[correct]){
                int temp=arr[correct];
                arr[correct] = arr[i];
                arr[i] = temp;
            }
            else{
                i++;
            }
        }
        System.out.println(Arrays.toString(arr));
        sc.close();
    }
}
