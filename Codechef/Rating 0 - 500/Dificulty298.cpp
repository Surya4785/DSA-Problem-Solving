/* Battery Health
Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.

Given that your iPhone has X% battery health, find whether it is in optimal condition.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains an integer X — the battery health.

Output Format
For each test case, output on a new line, YES, if the battery is in optimal condition, and NO otherwise.

You may print each character in uppercase or lowercase. For example, NO, no, No and nO, are all considered identical.

Constraints
1≤T≤100
0≤X≤100   */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int battery;
        cin>>battery;
        if(battery>=80){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
