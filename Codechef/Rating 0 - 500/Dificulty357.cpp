/* Good Investment or Not
Chef has invested his money at an interest rate of X percent per annum while the current inflation rate is Y percent per annum.

An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
Determine whether the investment made by Chef is good or not.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two integers X and Y, the interest rate and the current inflation rate respectively.

Output Format
For each test case, output YES if the investment is good, NO otherwise.

You can output any letter in any case. For example YES, yes, yES are all considered same.

Constraints
1≤T≤400
1≤X,Y≤20   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x, y;
	    cin>>x>>y;
	    if(x>=(2*y)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
