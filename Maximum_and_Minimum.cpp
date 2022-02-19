#include<bits/stdc++.h>
int main()
{
    int n,x[20],y[10]={0},i,sum=0,count=0,min=999,max=-999;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(y[i]==i)
          {
              if(min>y[i])
                 min=y[i];
              if(max<y[i])
                 max=y[i];
              
              sum=sum+i;
              count++;
          }
    }
    if(count>0)
      std::cout<<min<<" "<<max;
    else
      std::cout<<"-1";
    return 0;
}