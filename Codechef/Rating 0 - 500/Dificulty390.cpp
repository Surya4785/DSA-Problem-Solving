/* Minimum Coins
There are only 2 type of denominations in Chefland:

Coins worth 1 rupee each, Notes worth 10 rupees each. Chef wants to pay his friend exactly X rupees. What is the minimum number of coins Chef needs
to pay exactly X rupees?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input containing a single integer X.

Output Format
For each test case, output on a new line the minimum number of coins Chef needs to pay exactly X rupees.

Constraints
1≤T≤1000
1≤X≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    cin>>x;
	    cout<<(x%10)<<endl;
	}
}
