#include<bits/stdc++.h>
int main()
{
    int n,sum=0,r,temp;
    std::cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(temp%sum==0)
      std::cout<<"True";
    else
      std::cout<<"False";
      
    return 0;
}