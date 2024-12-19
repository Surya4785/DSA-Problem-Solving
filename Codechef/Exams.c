#include<stdio.h>
int main()
{
    int i,t,x,y,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int c=(x*y)/2;
        if(z>c)
        {
            printf("\nyes");
        }
        else{
            printf("\nno");
        }
    }
    
}
