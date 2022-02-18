#include<bits/stdc++.h>
int main()
{
    int n,i,e_sum=0,o_sum=0,x[100];
    std::cin>>n;

    for(i=0;i<n;i++)
     { 
        std::cin>>x[i];
        if(x[i]%2==0)
          e_sum+=x[i];
        else
          o_sum+=x[i];
     }
    if(e_sum>=o_sum)
      std::cout<<e_sum-o_sum;
    else
      std::cout<<o_sum-e_sum;
    return 0;
}