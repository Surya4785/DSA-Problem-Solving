/* Messi vs Ronaldo
In Chefland, a football player gets 2 points for each goal and 1 point for each assist.

Messi has A goals and B assists this season, whereas Ronaldo has X goals and Y assists.
Find out the player with more points this season.

Input Format
The first and only line of input will contains four space-separated integers 
A, B, X and Y, the number of goals and assists that Messi has and the number of goals and assists that Ronaldo has, respectively.

Output Format
Print a single line containing:
Messi, if Messi has more points than Ronaldo.
Ronaldo, if Ronaldo has more points than Messi.
Equal, if both have equal points.
You can print each character in uppercase or lowercase. For example, the strings Messi, MESSI, messi, and MeSSi are considered identical.

Constraints
0≤A,B,X,Y≤100   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if((2*a+1*b) > (2*x+1*y)){
	    cout<<"Messi"<<endl;
	}
	else if((2*a+1*b) < (2*x+1*y)){
	    cout<<"Ronaldo"<<endl;
	}
	else{
	    cout<<"Equal"<<endl;
	}
}
