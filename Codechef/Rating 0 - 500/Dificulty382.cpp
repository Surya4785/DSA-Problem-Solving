/* Six Friends
Six friends go on a trip and are looking for accommodation. After looking for hours, they find a hotel which offers two types of rooms — double 
rooms and triple rooms. A double room costs Rs. 
X, while a triple room costs Rs. Y.

The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and Y - the cost of a double room and the cost of a triple room.

Output Format
For each testcase, output the minimum amount required to accommodate all the six friends.

Constraints
1≤T≤100
1≤X<Y≤100     */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    int y;
	    cin>>x>>y;
	    if((3*x)<=(2*y)){
	        cout<<(3*x)<<endl;
	    }
	    else{
	        cout<<(2*y)<<endl;
	    }
	}
}
