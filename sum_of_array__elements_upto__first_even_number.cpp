#include<bits/stdc++.h>
int main()
{
    int n,x[10],k,i,sum=0;
    std::cin>>n;
    for(i=0;i<n;i++)
          std::cin>>x[i];
    std::cin>>k;
    for(i=0;i<n;i++)
       if(x[i]%2==0)
         break;
       else
          sum=sum+x[i];
    
    std::cout<<sum;
    return 0;
}