#include<bits/stdc++.h>
int main()
{
    int n,x[30],y[10]={0},i,j,sum=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    
      for(j=1;j<10;j++)
      {
              if(y[j]==1)
                {
                    sum=sum+j;
                }
                else if(y[j]>1)
                 {
                     sum=sum+j;
                     y[j]=0;
                 }
          }
        std::cout<<sum;
    
    return 0;
}