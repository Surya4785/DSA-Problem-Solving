/* Right There
If you wanna party, if you, if you wanna party
Then put your hands up

Chef wants to host a party with a total of N people.
However, the party hall has a capacity of X people. Find whether Chef can host the party.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and X — the total number of people and the capacity of the party hall.

Output Format
For each test case, output on a new line, YES, if Chef can host the party and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. That is, the strings NO, no, nO, and No will be treated as equivalent.

Constraints
1≤T≤100
1≤N,X≤10   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,x;
	    cin>>n>>x;
	    if(n<=x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
