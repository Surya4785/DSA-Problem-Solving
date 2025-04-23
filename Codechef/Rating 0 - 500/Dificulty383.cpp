/* Chef and Wire Frames
Chef has a rectangular plate of length Ncm and width Mcm. He wants to make a wireframe around the plate. The wireframe costs X rupees per cm.

Determine the cost Chef needs to incur to buy the wireframe.

Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers 
N,M, and X — the length of the plate, width of the plate, and the cost of frame per cm.
Output Format
For each test case, output in a single line, the price Chef needs to pay for the wireframe.

Constraints
1≤T≤1000
1≤N,M,X≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int m,n,x;
	    cin>>m>>n>>x;
	    cout<<2*(m+n)*x<<endl;
	}
}
