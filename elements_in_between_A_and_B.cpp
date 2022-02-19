#include<bits/stdc++.h>
int main()
{
    int n,x[40],i,a,b,count=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    std::cin>>a>>b;
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
            {count++;
            std::cout<<x[i]<<" ";
                
            }
    }
    
    if(count==0)
std::cout<<"-1";
    return 0;
}