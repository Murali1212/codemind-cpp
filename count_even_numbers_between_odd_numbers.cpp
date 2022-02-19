#include<bits/stdc++.h>
int main()
{
    int n,x[20],count=0,i;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
     for(i=0;i<n-2;i++)
     {
        
           
          
        if(x[i]%2!=0 && x[i+1]%2==0 && x[i+2]%2!=0)
        {
            count++;
                      
        }
          
         
     }
     std::cout<<count;
     return 0;
}