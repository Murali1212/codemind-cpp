#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int x[20],n,i,d,k,count=0;
    std::cin>>n>>k;
    for(i=0;i<n;i++)
     std::cin>>x[i];
     
    for(i=0;i<n;i++)
    {   if(x[i]<0)
          x[i]=-x[i];
        if(x[i]==0)
          d=1;
        else
            d=(int)log10(x[i])+1;
        if(d==k)
          count++;
    }
    std::cout<<count;
    return 0;
}