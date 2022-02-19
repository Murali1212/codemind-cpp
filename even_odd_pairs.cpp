#include<bits/stdc++.h>
int main()
{
    int n,x[20],e[20],o[20],i,j=0,k=0,min;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x[i];
        if(x[i]%2==0)
          e[j++]=x[i];
        else
          o[k++]=x[i];
    }
    min=j>k?k:j;
    for(i=0;i<min;i++)
    {
        std::cout<<e[i]<<" "<<o[i]<<" ";
    }
    if(min==j)
       for(i=min;i<k;i++)
         std::cout<<o[i]<<" ";
    else
       for(i=min;i<j;i++)
          std::cout<<e[i]<<" ";
    if(n%2!=0)
       std::cout<<"0";
    return 0;
}