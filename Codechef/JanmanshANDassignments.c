#include <stdio.h>

int main() {
    int t,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
         scanf("%d",&x);
         if((x+3)<=10){
             printf("yes");
         }
         else{
             printf("no");
         }
         printf("\n");
    }
    
}