#include<bits/stdc++.h>
int main()
{
    int n,x[20],max=-9999,i;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x[i];
        if(max<x[i])
          max=x[i];
    }
    std::cout<<max;
    return 0;
}