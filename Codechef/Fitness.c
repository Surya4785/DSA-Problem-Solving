/*FITNESS
  Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away
  from his home. If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.

  INPUT FORMAT
  - First line will contain T, number of test cases. Then the test cases follow.
  - Each test case contains of a single line consisting of single integer X.

  OUTPUT FORMAT
  For each test case, output the number of kilometers Chef travels through office trips in a week.

  Contraints
  1<=T<=10
  1<=X<=10  */ 

#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
    int x;
    scanf("%d",&x);
    
    int z = 2*x;
    printf("%d\n" , 5*z);
   }
}
