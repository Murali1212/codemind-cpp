#include<bits/stdc++.h>
int main()
{
    int n,x[30],y[10]={0},i,count=0,k;
std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
    std::cin>>k;
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=1;i<10;i++)
    {
        if(y[i]==k)
         {
             std::cout<<i<<" ";
             count++;
         }
    }
    
       if(count==0)
         std::cout<<"-1";
    
    return 0;
}