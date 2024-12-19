/*Search an element in an array You are given an array A. A of size N. N and an element X
X. Your task is to find whether the array A contains the element X or not.

Input Format

The first line contains two space-separated integers N and X — the size of array and the element to be searched.
The second line contains all the elements of array A
Output Format

Output "YES" if the element X is present in A, otherwise output "NO". 

Constraints
1≤N≤10^5
1≤N≤10^5  */
 
 #include <stdio.h>
int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
