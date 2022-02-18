#include<bits/stdc++.h>
int main()
{
    int n,i,e_sum=0,x[100];
    std::cin>>n;

    for(i=0;i<n;i++)
     { 
        std::cin>>x[i];
        if(i%2==0)
          e_sum+=x[i];
     }
    
      std::cout<<e_sum;
    return 0;
}