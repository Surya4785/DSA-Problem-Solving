#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int sum=0;
	    while(n!=0){
	        sum+=n%10;
	        n/=10;
	    }
	    cout<<sum<<endl;
	}
}
