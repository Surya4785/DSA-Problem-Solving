import java.util.*;
import java.util.Arrays;
public class insertion_sort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size:");
        int size = sc.nextInt();
        System.out.println("Enter the elements of the array:");
        int arr[] = new int[size];
        for(int i=0;i<size;i++){
            arr[i] = sc.nextInt();
        }
        insertion(arr);
        System.out.println(Arrays.toString(arr));
        sc.close();
    }    
    static void insertion(int[] arr){
        for (int i=0;i<=arr.length-2;i++){
            for(int j=1+i;j>0;j--){
                if (arr[j] < arr[j-1]) {
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1]  = temp;
                }
                else{
                    break;
                }
            }
        }
    }
}
