#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a-c) < (b-d)){
	        cout<<"FIRST\n";
	    }
	    else if((a-c) > (b-d)){
	        cout<<"SECOND\n";
	    }
	    else{
	        cout<<"ANY\n";
	    }
	}
}
