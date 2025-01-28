import java.util.*;
public class bubbleSortRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        System.out.println("Enter the element in the array:");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.print(Arrays.toString(bubbleSort(arr,n-1,0)));
        sc.close();
    }
    static int[] bubbleSort(int[] arr,int i,int j){
        if(i==0){
            return arr;
        }
        if(i > j){
           if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           }
           return bubbleSort(arr,i,j+1);
        }
        return bubbleSort(arr,i-1,0);
    }
}
