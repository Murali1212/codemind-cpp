#include<bits/stdc++.h>
int main()
{
    int n,x[20],ind=0,i;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x[i];
        if(x[i]%2!=0)
          ind=i;
    }
    std::cout<<ind;
    return 0;
}