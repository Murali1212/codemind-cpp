#include<bits/stdc++.h>
int main()
{
    int n,i,sum=0,x[100];
    std::cin>>n;

    for(i=0;i<n;i++)
     { 
        std::cin>>x[i];
        
          sum+=x[i];
     }
    
      std::cout<<sum;
    return 0;
}
