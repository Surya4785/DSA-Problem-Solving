import java.util.Arrays;
import java.util.Scanner;
public class quickSort {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        System.out.println("Enter the elements of the array:");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        sort(arr,0,arr.length -1 );
        System.out.print(Arrays.toString(arr));
        sc.close();
    }
    static void sort(int[] arr,int low,int high){
        if(low>=high){
            return;
        }
        int s=low;
        int e=high;
        int m = s + (e-s)/2;
        int pivot = arr[m];
        while(s<=e){
            while(arr[s] < pivot){
                s++;
            }
            while(arr[e] > pivot){
                e--;
            }
            if(s<=e){
                int temp=arr[s];
                arr[s] = arr[e];
                arr[e] = temp;
                s++;
                e--;
            }
        }
        sort(arr,low,e);
        sort(arr,s,high);
    }
}
