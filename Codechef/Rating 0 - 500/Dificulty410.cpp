#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a;
    float b;
    cin >> a >> b;
    
    if (( a % 5 == 0 ) && ( b - a -0.5 >= 0)) {
        cout << b-a-0.5 << endl;
    } else {
        cout << b << endl;
    }
}
