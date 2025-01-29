import java.util.Scanner;
import java.util.Arrays;
public class mergeSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        System.out.println("Enter the elements of the array:");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        mergeSort(arr,0,arr.length);
        System.out.println(Arrays.toString(arr));
        sc.close();
    }
    static void mergeSort(int[] arr,int s,int e){
        if((e-s) ==1){
            return;
        }
        int mid=(e+s)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid,e);
        merge(arr,s,mid,e);
        
    }
    static void merge(int[] arr,int s,int m,int e){
        int ans[] = new int[e-s];
        int i=s;
        int j=m;
        int k=0;
        while(i <m && j<e){
            if(arr[i] <= arr[j]){
                ans[k]=arr[i];
                i++;
            }
            else{
                ans[k] = arr[j];
                j++;
            }
            k++;
        }
        while(i<m){
            ans[k] =arr[i];
            i++;
            k++;
        }
        while(j<e){
            ans[k] = arr[j];
            j++;
            k++;
        }
        for(int l=0;l<ans.length;l++){
            arr[s+l] = ans[l];
        }
    }
}
