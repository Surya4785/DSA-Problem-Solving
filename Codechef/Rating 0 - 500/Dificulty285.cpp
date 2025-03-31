/* Best of Two
Chef took an examination two times. In the first attempt, he scored X marks while in the second attempt he scored Y marks.
According to the rules of the examination, the best score out of the two attempts will be considered as the final score.
Determine the final score of the Chef.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers X and Y — the marks scored by Chef in the first attempt and second attempt respectively.

Output Format
For each test case, output the final score of Chef in the examination.

Constraints
1≤T≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int x, y;
	    cin>>x>>y;
	    if(x>y){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<y<<endl;
	    }
	}
}
