#include<bits/stdc++.h>
int main()
{
    int n,arr[100],i, flag = 1;
    std::cin>>n;
    for(i=0; i<n; i++)
    {
        std::cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 1)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
    {
        std::cout<<"True";
    }
    else
    {
        std::cout<<"False";
    }
}