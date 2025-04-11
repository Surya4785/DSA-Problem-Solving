/* Mana Points
Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs 
X mana points to Chefario.

If Chefario currently has Y mana points, determine the maximum number of special attacks he can perform.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers X and Y — the cost of one special attack and the number of mana 
points Chefario has initially.
  
Output Format
For each test case, output the maximum number of special attacks Chefario can perform.

Constraints
1≤T≤10^5
1≤X≤100
1≤Y≤1000   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    cout<<(y/x)<<endl;
	}
}
