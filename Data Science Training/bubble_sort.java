import java.util.Scanner; 
import java.util.Arrays;
public class bubble_sort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the array");
        int size = sc.nextInt();
        System.out.println("Enter the element in the 1d array:");
        int arr[] = new int[size];
        for(int i=0;i<size;i++){
            arr[i] = sc.nextInt();
        }
        sort(arr);
        System.out.println(Arrays.toString(arr));
        sc.close();
    }
    static void sort(int[] arr){
        boolean swapped;
        for(int i =0;i<arr.length;i++){
             swapped = false;
            for(int j=1;j<arr.length-i;j++){
                
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] =temp;
                    swapped=true;
                }
            }
            if(!swapped){
                  break;  
            }
        }
    } 
}
