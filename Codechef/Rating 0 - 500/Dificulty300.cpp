/* Ageing
Chef's current age is 20 years, while Chefina's current age is 10 years.
Determine Chefina's age when Chef will be X years old.

Note: Assume that Chef and Chefina were born on same day and same month (just different year).

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X, the age of Chef.

Output Format
For each test case, output Chefina's age when Chef will be X years old.

Constraints
1≤T≤25
25≤X≤50  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    cin>>x;
	    cout<<(x-10)<<endl;
	}
}
