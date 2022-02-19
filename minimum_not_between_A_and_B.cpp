#include<bits/stdc++.h>
int main()
{
    int n,x[20],A,B,i,min=999;
    std::cin>>n;
    for(i=0;i<n;i++)
      std::cin>>x[i];
      
    std::cin>>A>>B;
    for(i=0;i<n;i++)
    {
        if(x[i]<A || x[i]>B)
        {
            if(min>x[i])
            {
                min=x[i];
            }
        }
    }
    if(min==999)
      std::cout<<"-1";
    else
    std::cout<<min;
    return 0;
}