#include<bits/stdc++.h>
int factors(int);
int main()
{
    int n,m,n1,m1;
    std::cin>>n>>m;
    n1=factors(n);
    m1=factors(m);
    if(n==m1 && m==n1)
      std::cout<<"Amicable";
    else
      std::cout<<"Not Amicable";
    
    return 0;
}
int factors(int x)
{
    int sum=0,i;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
          sum=sum+i;
    }
    return sum;
}
