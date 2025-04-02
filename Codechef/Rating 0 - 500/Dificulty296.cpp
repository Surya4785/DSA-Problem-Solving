/* Total Prize Money
In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 10 participants receive rupees X each.
Participants with rank 11 to 100 (both inclusive) receive rupees Y each.
Find the total prize money over all the contestants.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y - the prize for top 10 rankers and the prize for ranks 11 to 100 respectively.

Output Format
For each test case, output the total prize money over all the contestants.

Constraints
1≤T≤1000
1≤Y≤X≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y,a,b;
	    cin>>x>>y;
	    a = x*10;
	    b = y*90;
	    cout<<(a+b)<<endl;
	}
}
