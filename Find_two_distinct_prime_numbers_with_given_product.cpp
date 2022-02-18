#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int n,i,found=0;
    std::cin>>n;
    
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            found=1;
            break;
            
        }
    }
    if(found==1)
    std::cout<<i<<" "<<n/i<<" ";
    else
     std::cout<<"-1";
    return 0;
}