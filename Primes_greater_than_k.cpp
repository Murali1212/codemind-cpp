#include<bits/stdc++.h>
#include<math.h>
int prime(int n);

int main()
{
    int n,x[50],i,k,count=0;
    
    std::cin>>n;
    for(i=0;i<n;i++)
     {
         std::cin>>x[i];
         
     }
     std::cin>>k;
     for(i=0;i<n;i++)
     {
         if(prime(x[i]) && x[i]>=k)
           {
             
               count++;
           }
     }
   
     std::cout<<count;
    
     return 0;
}
int prime(int p)
{
    int i;
    if(p==1)
      return 0;
    for(i=2;i<=sqrt(p);i++)
       if(p%i==0)
         return 0;
     
       return 1;
}