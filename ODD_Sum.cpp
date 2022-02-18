#include<bits/stdc++.h>
int main()
{
    int n,i,o_sum=0,x[100];
    std::cin>>n;

    for(i=0;i<n;i++)
     { 
        std::cin>>x[i];
        if(x[i]%2!=0)
          o_sum+=x[i];
     }
    
      std::cout<<o_sum;
    return 0;
}