#include<bits/stdc++.h>
int main()
{
    int x[10],n,even[10],odd[10],i,j=0,k=0;
    std::cin>>n;
    for(i=0;i<n;i++)
     {
         std::cin>>x[i];
         if(x[i]%2==0)
           even[j++]=x[i];
         else
           odd[k++]=x[i];
     }
     
     for(i=0;i<k;i++)
       std::cout<<odd[i]<<" ";
     for(i=0;i<j;i++)
       std::cout<<even[i]<<" ";
     return 0;

}