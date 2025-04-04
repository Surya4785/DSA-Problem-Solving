/* Second Max of Three Numbers
Problem Statement
Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

Input
First line contains the number of triples, N.
The next N lines which follow each have three space separated integers.
Output
For each of the N triples, output one new line which contains the second-maximum integer among the three.

Constraints
1 ≤ N ≤ 6
1 ≤ every integer ≤ 10000
The three integers in a single triplet are all distinct. That is, no two of them are equal.   */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int a,b,c;
	cin>>a>>b>>c;
	    if(a>b){
	      if(a>c){
	          if(b>c){
	              cout<<b<<endl;
	          }
	          else{
	              cout<<c<<endl;
	          }
	      }
	      else{
	          cout<<a<<endl;
	      }
	   }
	   else if(b>c){
	       if(a>c){
	           cout<<a<<endl;
	       }
	       else{
	           cout<<c<<endl;
	       }
	   }
	   else{
	          if(b>a)
	       {
	       cout<<b<<endl;
	       }
	       else{
	           cout<<a<<endl;
	       }
	   }
	}
}
