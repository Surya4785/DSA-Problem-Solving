/* Cricket World Cup Qualifier

The cricket World Cup has started in Chefland. There are many teams participating in the group stage matches. Any team that scores 
12 or more points in the group stage matches qualifies for the next stage.
You know the score that a particular team has scored in the group stage matches. Determine if the team has qualified for the next stage or not.

Input Format
The first and only line of input consists of an integer X denoting the total points scored by the given team in the group stage matches.

Output Format
Output Yes, if the team has qualified for the next stage, and No otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Constraints
1≤X≤20   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if (x>=12) {
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
	return 0;
}
