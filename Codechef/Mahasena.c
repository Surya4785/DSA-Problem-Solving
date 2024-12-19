#include<stdio.h>
int main()
{
    int n,i,a[100];
     int temp=0;
        int count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        if(a[i]%2==0){
            count=count+1;
        }
       else{
           temp=temp+1;
       }
   
    }
      if(count>temp){
           printf("\n READY FOR BATTLE");
       }
       else{
           printf("\n NOT READY");
}
}