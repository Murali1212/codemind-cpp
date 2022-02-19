#include<bits/stdc++.h>
int main()
{
    int n,x[10],p,q,sum=0,i,found=0;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
    std::cin>>p>>q;
    if(p>q)
    {
        int c=p;
        p=q;
        q=c;
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>=p && x[i]<=q)
            continue;
        sum=sum+x[i];
    }
    std::cout<<sum;
    return 0;
}