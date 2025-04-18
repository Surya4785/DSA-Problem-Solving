/* Chef gives Party
Chef wants to give a burger party to all his N friends i.e. he wants to buy one burger for each of his friends.

The cost of each burger is X rupees while Chef has a total of K rupees.

Determine whether he has enough money to buy a burger for each of his friends or not.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains the three integers N, X, and K - the number of Chef's friends, the cost of each burger,
and the total money Chef has, respectively.

Output Format
For each test case, output YES if the Chef can give a party to all his N friends. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1≤T≤1000
1≤N,X≤100
1≤K≤10000    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n, x, k;
	    cin>>n>>x>>k;
	    if(k>=(n*x)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
