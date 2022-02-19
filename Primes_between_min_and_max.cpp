#include<bits/stdc++.h>
#include<math.h>
int prime(int n);

int main()
{
    int n,x[50],i,k,count=0,min=9999,max=0,i1=0,i2=0;
    
    std::cin>>n;
    for(i=0;i<n;i++)
     {
         std::cin>>x[i];
         if(min>x[i])
          { min=x[i];
            i1=i;
          }
         if(max<x[i])
           { max=x[i];
             i2=i;
           }
     }
     if(i1>i2)
       {
           int temp=i1;
           i1=i2;
           i2=temp;
       }
     for(i=i1;i<=i2;i++)
     {
         if(x[i]>=min && x[i]<=max)
           if(prime(x[i]))
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