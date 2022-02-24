#include<bits/stdc++.h>
int reverse(int n)
{ 
    int sum=0,m=n;
    while(n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    std::cout<<sum<<" ";
}
int main()
{
  int n,x[30],i;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  for(i=0;i<n;i++)
  {
     reverse(x[i]);
       
  }
  
  return 0;
}