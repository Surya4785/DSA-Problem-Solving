/* Bidding
Alice, Bob and Charlie are bidding for an artifact at an auction.
Alice bids A rupees, Bob bids B rupees, and Charlie bids C rupees (where A,B, and C are distinct).

According to the rules of the auction, the person who bids the highest amount will win the auction.
Determine who will win the auction.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers A, B, and C, — the amount bid by Alice, Bob, and Charlie respectively.
  
Output Format
For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.
You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example, ALICE, aliCe, aLIcE will be considered identical).

Constraints
1≤T≤1000
1≤A,B,C≤1000  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int a, b, c;
	    cin>>a>>b>>c;
	    if(a>b && a>c){
	        cout<<"Alice"<<endl;
	    }
	    else if(b>a && b>c){
	        cout<<"Bob"<<endl;
	    }
	    else{
	        cout<<"Charlie"<<endl;
	    }
	}
}
