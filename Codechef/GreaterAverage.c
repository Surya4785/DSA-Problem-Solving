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
