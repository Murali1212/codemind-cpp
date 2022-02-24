#include<bits/stdc++.h>
int find(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
  int n,x[40],i,sum=0;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  for(i=0;i<n;i++)
  {
     sum=sum+find(x[i]);
       
  }
  std::cout<<sum;
  
  return 0;
}