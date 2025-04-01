/* Candy Division
There are three friends and a total of N candies.
There will be a fight amongst the friends if all of them do not get the same number of candies.
Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer N - the number of candies.

Output Format
For each test case, output YES, if we can distribute all the candies between the three friends equally. Otherwise output NO.
You can output each character of the answer in uppercase or lowercase. For example, the strings yEs, yes, Yes, and YES are considered the same.

Constraints
1≤T≤100
1≤N≤100   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    if(n%3 == 0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	 }
}
