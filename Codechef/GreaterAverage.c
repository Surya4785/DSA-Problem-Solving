/*Greater Average
You are given 3 numbers A,B, and C. Determine whether the average of A and B is strictly greater than C or not?

NOTE: Average of A and B is defined as (A+B)/2. For example, average of 5 and 9 is 7, average of 5 and 8 is 6.5.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases. Each test case consists of 3 integers A,B, and C.

Output Format
For each test case, output YES if average of A and B is strictly greater than C, NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS,
yEs, yes and YES will all be treated as identical).

Constraints
1<=T<=1000
1<=A,B,C<=10   */

#include<stdio.h>
int main()
{
    int i,t,a,b,c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d%d",&a,&b,&c);
    int d=(a+b)/2;
    if((a+b)%2!=0){
        d=d+1;
    }
    if(d>c){
        printf("yes");
    }
    else
    {
        printf("no");
    }
    printf("\n");
    }
}
