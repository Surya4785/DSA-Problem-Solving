/* Interior Design
Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.

For the first style, tiling the floor will cost X1 rupees and painting the walls will cost Y1 rupees.
For the second style, tiling the floor will cost X2 rupees and painting the walls will cost Y2 rupees.
Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input, containing 4 space-separated integers X1, Y1, X2, Y2 as described in the statement.

Output Format
For each test case, output on a new line the amount Chef will pay for interior design.

Constraints
1≤T≤100   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    if((x1+y1)>(x2+y2)){
	        cout<<(x2+y2)<<endl;
	    }
	    else{
	        cout<<(x1+y1)<<endl;
	    }
	}
}
