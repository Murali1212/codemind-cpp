#include<bits/stdc++.h>
int main()
{
  int n,x[30],count=0,i,a,b,c;
  std::cin>>n;
  for(i=0;i<n;i++)
    std::cin>>x[i];
  a=x[0];
  b=x[1];
  c=a+b;
  if(n<=2)
    {
        std::cout<<"no";
        return 0;
    }
  for(i=2;i<n;i++)
  {   
      if(c!=x[i])
        {
            std::cout<<"no";
            return 0;
        }
        a=b;
        b=c;
        c=a+b;
  }
  std::cout<<"yes";
  return 0;
}