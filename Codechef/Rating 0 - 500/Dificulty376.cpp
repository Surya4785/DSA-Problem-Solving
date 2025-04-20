/* Multivitamin Tablets
The doctor prescribed Chef to take a multivitamin tablet 3 times a day for the next X days.

Chef already has Y multivitamin tablets.

Determine if Chef has enough tablets for these X days or not.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers X and Y — the number of days Chef needs to take tablets and the number 
of tablets Chef already has.

Output Format
For each test case, output YES if Chef has enough tablets for these X days. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x, y;
	    cin>>x>>y;
	    if((x*3)<=y){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
