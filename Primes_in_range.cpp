#include<bits/stdc++.h>
#include<math.h>
bool prime(int n)
{
    int i,count=0;
    for(i=2;i<=(int)sqrt(n);i++)
     {
         if(n%i==0)
         {
             count++;
             break;
         }
     }
     if(count==0)
       return true;
     else
       return false;
}
int main()
{
    int m,n,i,c=0;
    std::cin>>m>>n;
    if(m==1)
      m=2;
    for(i=m;i<=n;i++)
    {
        if(prime(i))
           c++;
    }
    std::cout<<c;
    return 0;
}