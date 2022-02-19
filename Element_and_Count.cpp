#include<bits/stdc++.h>
int main()
{
    int n,x[20],y[10]={0},i,j;
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
             if(y[j]!=0)
             {
             std::cout<<j <<" "<<y[j];
             std::cout<<" ";
             y[j]=0;
             break;
             }
            }  
         }
     
    
       }
         
   
    return 0;
}