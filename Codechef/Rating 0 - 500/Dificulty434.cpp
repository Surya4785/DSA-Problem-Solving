#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>y && x>z){
	        cout<<"SETTER\n";
	    }
	    else if(y>x && y>z){
	        cout<<"TESTER\n";
	    }
	    else{
	        cout<<"EDITORIALIST\n";
	    }
	}
}
