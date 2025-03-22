/* Determine the Score
Chef appeared for a placement test. There is a problem worth X points. Chef finds out that the problem has exactly 10 test cases.
It is known that each test case is worth the same number of points.

Chef passes N test cases among them. Determine the score Chef will get.

NOTE: See sample explanation for more clarity.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and N, the total points for the problem and the number of test cases
which pass for Chef's solution.

Output Format
For each test case, output the points scored by Chef.

Constraints
1≤T≤100
10≤X≤200
0≤N≤10
X is a multiple of 10. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	    int t,x,n,a,b;
	    cin>>t;
	    while(t--){
	        cin>>x>>n;
	        a = x/10;
	        b = a*n;
	        cout<<b<<endl;
	    }
}
