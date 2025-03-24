/* IPL Ticket Rush
DAIICT college students want to attend an IPL match.

A total of N students from the college want to go while only M tickets are available for the match.
Determine how many students won't be able to book tickets.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers N and M — the number of students wants to go and the total number of tickets available,
respectively.

Output Format
For each test case, output on a new line the number of students who won't be able to book tickets.

Constraints
1≤T≤1000
1≤N,M≤10^5  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,m,n,s;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n>=m){
	        cout<<(n-m)<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	 }
}
