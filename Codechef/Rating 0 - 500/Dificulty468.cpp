#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,a,b;
	    cin>>x>>y>>z;
	    a = x*y;
	    b = 24*60*z;
	    if(a<=b){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
