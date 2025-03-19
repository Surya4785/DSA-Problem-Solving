/* Clear Day
Chef classifies a day to be either rainy, cloudy, or clear.

In a particular week, Chef finds X days to be rainy and Y days to be cloudy.
Find the number of clear days in the week.

Input Format
The first and only line of input will contain two space-separated integers 
X and Y, denoting the number of rainy and cloudy days in the week.

Output Format
Output the number of clear days in the week.

Constraints
0≤X,Y≤7
0≤X+Y≤7 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;
	if (x+y<=7){
	    cout<<(7-(x+y));
	}
	else{
	    cout<<0;
	}
}
