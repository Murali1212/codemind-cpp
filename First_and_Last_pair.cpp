#include<bits/stdc++.h>
int main()
{
    int x[20],n,i;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
    for(i=0;i<n/2;i++)
    {
        std::cout<<x[i]<<" "<<x[n-i-1]<<" ";
    }
    if(n%2!=0)
    {
    std::cout<<x[n/2]<<" "<<0;
    }
    return 0;
}