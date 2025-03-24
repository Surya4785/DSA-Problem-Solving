/* Kitchen Timings
The working hours of Chef’s kitchen are from X pm to Y pm (1≤X<Y≤12).

Find the number of hours Chef works.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the starting and ending time of working hours respectively.

Output Format
For each test case, output on a new line, the number of hours Chef works.

Constraints
1≤T≤100
1≤X<Y≤12 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    z = (y-x);
	    cout<<z<<endl;
	 }
}
