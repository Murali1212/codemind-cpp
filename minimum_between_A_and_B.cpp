#include<bits/stdc++.h>
int main()
{
    int n,x[40],i,a,b,min=9999;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
    std::cin>>a>>b;
    
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
            if(min>x[i])
               min=x[i];
    }
    if(min==9999)
      std::cout<<"-1";
    else
    std::cout<<min;
    return 0;
}