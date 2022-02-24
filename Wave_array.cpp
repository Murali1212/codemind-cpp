#include<bits/stdc++.h>
int main()
{
  int n,x[20],count=0,i;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  
  for(i=0;i<n-2;i++)
  {
      if(x[i+1]>x[i] && x[i+1]<x[i+2] || x[i+1]<x[i]&&x[i+1]>x[i+2])
        {
            std::cout<<"no";
            return 0;
        }
  }
  std::cout<<"yes";
  return 0;
}
