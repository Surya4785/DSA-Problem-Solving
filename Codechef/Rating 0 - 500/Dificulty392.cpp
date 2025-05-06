/* The Gift
Om has X rupees. He wants to gift a laptop worth N rupees to his girlfriend.

We know that Om is the technical secretary of IIIT-A and has access to the Gymkhana funds of IIIT-A. Currently there are 
M rupees in the fund and Om can use the fund as much as he wants.
Find whether Om can gift his girlfriend a new laptop.

Input Format
The first and only line of input contains three space-separated integers 
X, N, and M — the amount Om has, the price of the laptop, and the amount present in the Gymkhana fund respectively.

Output Format
For each input, output YES if Om can buy the laptop and NO otherwise.

You may print each character in uppercase or lowercase. For example YES, Yes, yes, and yES are all considered the same.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,n,m;
	cin>>x>>n>>m;
	if(x+m>=n){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO";
	}
}
