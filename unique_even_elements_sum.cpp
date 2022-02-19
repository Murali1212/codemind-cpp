#include<bits/stdc++.h>
int main()
{
    int n,i,x[50],y[10]={0},sum=0;
    std::cin>>n;
    for(i=0;i<n;i++)
     {
         std::cin>>x[i];
         y[x[i]]++;
     }
     for(i=1;i<10;i++)
     {
         if(y[i]!=0 && i%2==0)
            sum=sum+i;
     }
    std::cout<<sum;
     return 0;
    
}