#include<bits/stdc++.h>
int main()
{
    int n,x[10],y[10]={0},i,j,count=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
  
    for(i=0;i<n;i++)
    {
        y[x[i]]++;
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<10;j++)
        {
         if(x[i]==j)
         {
          if(y[j]==1 && j%2!=0)
           {
             
             count++;
             y[j]=0;
           }
           break;
         }
        }
    }
    
       
    std::cout<<count;
    return 0;
}