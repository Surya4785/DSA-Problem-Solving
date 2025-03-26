/* Puzzle Hunt
Chef and some of his friends are planning to participate in a puzzle hunt event.

The rules of the puzzle hunt state:
"This hunt is intended for teams of 6 to 8 people."

Chef's team has N people in total. Are they eligible to participate?

Input Format
The first and only line of input will contain a single integer N: the number of people present in Chef's team.

Output Format
Print the answer: Yes if Chef's team is eligible to participate, and No otherwise.
Each letter in the output may be printed in either uppercase or lowercase, i.e, the outputs NO, No, nO, no will all be treated as equivalent.

Constraints
1≤N≤10 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n>=6 && n<=8){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
}
