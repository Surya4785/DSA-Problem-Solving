/* Tom and Jerry Chase
In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.

Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of Y metres per second. Determine whether 
Tom will be able to catch Jerry.

Note that initially Jerry is not at the same position as Tom.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the speeds of Jerry and Tom respectively.

Output Format
For each test case, output on a new line, YES, if Tom will be able to catch Jerry. Otherwise, output NO.

You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered the same.

Constraints
1≤T≤100
1≤X,Y≤10   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(y>x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
