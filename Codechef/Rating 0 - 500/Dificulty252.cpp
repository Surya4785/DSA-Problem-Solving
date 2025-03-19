/* Saving Taxes
In Chefland, everyone who earns strictly more than Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest
any amount of money and claim exemption for it.
You have earned X (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line of input consisting of two space separated integers X and Y denoting the amount you earned and the amount
above which you will have to pay taxes.

Output Format
For each test case, output a single integer, denoting the minimum amount you need to invest.

Constraints
1≤T≤100
1≤Y<X≤100  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin>>n;
    for(int i=0; i<=(n-1); i++){
      int x,y;
      cin>>x>>y;
      if(x>y){
	 cout<<(x-y)<<endl;
       }
   }
}
