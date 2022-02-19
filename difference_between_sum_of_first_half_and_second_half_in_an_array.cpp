#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int n,x[10],k,i,sum1=0,sum2=0;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
          std::cin>>x[i];
          if(i<n/2)
            sum1+=x[i];
          else
            sum2+=x[i];
    }
    
    std::cout<<abs(sum1-sum2);
    return 0;
}