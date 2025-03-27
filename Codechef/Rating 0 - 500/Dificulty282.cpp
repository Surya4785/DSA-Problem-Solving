/* Bone Appetit
Trick or treat, bags of sweets, ghosts are walking down the street

It's Halloween and Suri Bhai is out to get his treats.
There are two sectors in his neighborhood, "Bones" and "Blood". They have N and M people, respectively.

Each person in "Bones" will hand out X treats, and each person in "Blood" will hand out Y treats.
How many treats does Suri Bhai get from visiting everyone in his neighborhood in total?

Input Format
The first line of input contains two space-separated integers N and M — the number of people in "Bones" and "Blood", respectively.
The second line of input contains two space-separated integers X and Y — the number of treats handed out by each person in "Bones" and "Blood",
respectively.

Output Format
For each test case output a single integer: the total number of treats Suri Bhai will receive.

Constraints
0≤N,M≤100
0≤X,Y≤1000  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,n,m,a,b,z;
	    cin>>x>>y>>n>>m;
	    a = n*x;
	    b = m*y;
	    z = a+b;
	    cout<<z;
	}
