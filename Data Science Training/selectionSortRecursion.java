import java.util.*;
public class selectionSortRecursion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        System.out.println("Enter the element in the array:");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.print(Arrays.toString(selectionSort(arr,n,0,0)));
        sc.close();
    }
    static int[] selectionSort(int[] arr,int i, int j,int max){
        if(i==0){
            return arr;
        }
        if(i>j){
            if(arr[max] < arr[j]){
                return selectionSort(arr,i,j+1,j);
            }
            else{
                return selectionSort(arr,i,j+1,max);
            }
        }
        else{
            int temp = arr[i-1];
            arr[i-1] = arr[max];
            arr[max] = temp;
        }
        return selectionSort(arr,i-1,0,0);
    }
}
