#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x > y ? cout << y << endl : cout << x << endl;
    }
    return 0;
}
