#include <stdio.h>

int main() 
{
    int t,n,x,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d%d",&n,&x);
    int m=n/6;
    if(n%6!=0){
        m=m+1;
    }
    printf("\n%d",m*x);
    }
}