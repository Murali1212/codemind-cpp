#include<bits/stdc++.h>
int main()
{
    int n,x[100],i;
    std::cin>>n;
    for(i=0;i<n;i++)
std::cin>>x[i];
    
    for(i=0;i<n;i++)
    {
        if(x[i]%2==0)
        {
            if(i%2!=0)
            {
            std::cout<<"False";
            return 0;
            }
        }
    }
    std::cout<<"True";
    return 0;
}