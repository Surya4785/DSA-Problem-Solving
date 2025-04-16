/* MATH1 Enrolment
For the upcoming semester, the admins of your university decided to keep a total of X seats for the MATH-1 course. A student interest survey was 
conducted by the admins and it was found that Y students were interested in taking up the MATH-1 course.

Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two-space separated integers on a single line, X and Y — the current number of seats up for enrolment and the number
of students interested in taking up the course in the upcoming semester, respectively.

Output Format
For each test case, output on a new line the minimum number of seats required to be added.

Constraints
1≤T≤100
1≤X,Y≤10^5  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(x<=y){
	        cout<<(y-x)<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
}
