#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int costDisposable = 100 * x; 
        int costCloth = 10 * y; 
    
        if (costDisposable < costCloth) {
            cout << "DISPOSABLE" << endl; 
        } else {
            cout << "CLOTH" << endl; 
        }
    }
    return 0;
}
