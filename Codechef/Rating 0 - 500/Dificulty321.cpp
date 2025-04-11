/* Just One More Episode
Chef has to attend an exam that starts in X minutes, but of course, watching shows takes priority.

Every episode of the show that Chef is watching, is 24 minutes long.
If he starts watching a new episode now, will he finish watching it strictly before the exam starts?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of one line of input, containing a single integer X — the amount of time from now at which Chef's exam starts.
  
Output Format
For each test case, output on a new line the answer — YES if Chef will finish his episode before the exam starts, and NO otherwise.

Each character of the output may be printed in either lowercase or uppercase, i.e, the string Yes, YES, yes, YeS` will all be treated as equivalent.

Constraints
1≤T≤100
1≤X≤100   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    cin>>x;
	    if(x>24){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
