import java.util.*;
import java.util.Arrays;
public class selection_sort {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int size=sc.nextInt();
        System.out.println("Enter the element of array:");
        int arr[] = new int[size];
        for(int i=0;i<size;i++){
            arr[i]=sc.nextInt();
        }     
        selection(arr);
        System.out.println(Arrays.toString(arr));
        sc.close();
    }
    static void selection(int[] arr){
        for(int i=0;i<arr.length;i++){
            int last=arr.length-i-1;
            int maxIndex=getMaxIndex(arr,0,last);
            swap(arr,maxIndex,last);
        }
    }
    static int getMaxIndex(int[] arr,int start,int end){
        int max=start;
        for(int i=start+1;i<=end;i++){
            if(arr[max] < arr[i]){
                max=i;
            }
        }
        return max;
    }
    static void swap(int[] arr,int first,int second){
       int temp= arr[first];
       arr[first] = arr[second];
       arr[second] = temp;
    }
}
