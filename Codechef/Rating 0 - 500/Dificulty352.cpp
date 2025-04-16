/* Chef and Chapters
This semester, Chef took X courses. Each course has Y units and each unit has Z chapters in it.
Find the total number of chapters Chef has to study this semester.

Input Format
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X,Y, and Z.

Output Format
For each test case, output in a single line the total number of chapters Chef has to study this semester.

Constraints
1≤T≤1000
1≤X,Y,Z≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	int x,y,z;
	cin>>x>>y>>z;
	cout<<(x*y*z)<<endl;
	}
}
