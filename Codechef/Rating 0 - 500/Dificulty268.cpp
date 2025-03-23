/* 404 Not Found
Chef's website has a specific response mechanism based on the HTTP status code received:

If the response code is 404, the website will return NOT FOUND.
For any other response code different from 404, the website will return FOUND.
Given the response code as X, determine the website response.

Input Format
The first and only line of input contains a response code X.

Output Format
Output on a new line NOT FOUND, if the response code is 404. Otherwise print FOUND.

You may print each character of the string in uppercase or lowercase (for example, the strings FOUND, fouND, FouND, and found will all be treated
as identical).

Constraints
100≤X≤999  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	cin>>x;
	if(x == 404){
	    cout<<"NOT FOUND";
	}
	else{
	    cout<<"FOUND";
	}
}
