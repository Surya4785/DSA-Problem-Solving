#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(x<y){
	        cout<<"REPAIR"<<endl;
	    }
	    else if(y<x){
	        cout<<"NEW PHONE"<<endl;
	    }
	    else{
	        cout<<"ANY"<<endl;
	    }
	}
}
