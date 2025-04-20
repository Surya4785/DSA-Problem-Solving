/* Car Trip
Chef rented a car for a day.

Usually, the cost of the car is Rs 10 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 
300 kms even if the car runs less than 300 kms.

If the car ran X kms, determine the cost Chef needs to pay.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X - denoting the number of kms Chef travelled.

Output Format
For each test case, output the cost Chef needs to pay.

Constraints
1≤T≤100
1≤X≤1000    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    cin>>x;
	    if(x<=300){
	        cout<<(3000)<<endl;
	    }
	    else{
	        cout<<(x*10)<<endl;
	    }
	}
}
