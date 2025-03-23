 /* Donation Drive
A blood drive aims to collect N number of blood donations.
The drive has collected X donations so far. Find the remaining number of donations needed to reach the target.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case contains two space-separated integers N and X — the number of required donations and the number of collected donations, respectively.

Output Format
For each test case, output on a new line, the remaining number of donations needed to reach the target.

Constraints
1≤T≤200
1≤X≤N≤20 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    cout<<(x-y)<<endl;
	 }
}
