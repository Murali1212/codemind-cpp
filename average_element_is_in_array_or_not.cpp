#include<stdio.h>
int main()
{
    int n,x[10],ele,sum=0,i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
     {
         scanf("%d",&x[i]);
         sum=sum+x[i];
     }
     ele=sum/n;
    for(i=0;i<n;i++)
    {
        if(ele==x[i])
          {
              printf("True");
              return 0;
          }
    }
    printf("False");
    return 0;
}