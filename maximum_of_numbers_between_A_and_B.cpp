#include<bits/stdc++.h>
int main()
{
    int n,x[40],i,a,b,max=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    std::cin>>a>>b;
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
            if(max<x[i])
               max=x[i];
    }
    if(max==0)
      std::cout<<"-1";
    else
    std::cout<<max;
    return 0;
}