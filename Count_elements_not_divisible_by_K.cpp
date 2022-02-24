#include<bits/stdc++.h>
int main()
{
  int n,x[30],k,count=0,i;
  std::cin>>n>>k;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  for(i=0;i<n;i++)
  {
      if(x[i]%k!=0)
        count++;
  }
  std::cout<<count;
  return 0;
}