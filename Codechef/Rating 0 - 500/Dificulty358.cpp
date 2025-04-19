/* Final Population
There were initially X million people in a town, out of which Y million people left the town and Z million people immigrated to this town.

Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case consists of three integers X, Y and Z.

Output Format
For each test case, output the final population of the town in millions.

Constraints
1≤T≤100
1≤X,Y,Z≤10
Y≤X        */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    cout<<(x-y+z)<<endl;
	}
}
