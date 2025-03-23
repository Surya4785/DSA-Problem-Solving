/* Off By One
You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.
For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.

Given A and B, can you predict what the calculator will print when you ask it for A+B?

Input Format
The first and only line of input will contain two space-separated integers A and B.

Output Format
Print a single integer: the calculator's output when you enter A+B into it.

Constraints
1≤A,B≤50 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b;
	x = (a+b)*10;
	y = x+1;
	cout<<y;
}
