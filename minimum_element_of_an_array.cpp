#include<bits/stdc++.h>
int main()
{
    int n,x[20],min=99999,i;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        std::cin>>x[i];
        if(min>x[i])
          min=x[i];
    }
    std::cout<<min;
    return 0;
}