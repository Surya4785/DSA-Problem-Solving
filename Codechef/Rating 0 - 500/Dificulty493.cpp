#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, x;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> x;
	    if ( (a+b) >= x || (a+c) >= x || (b+c) >= x ) cout << "YES" << "\n";
	    else cout << "NO" << "\n";
	}
	return 0;
}
