#include<bits/stdc++.h>
int main()
{
    int n,a=0,b=1,c,prev;
    std::cin>>n;
    c=a+b;
    while(c<=n)
    {
        prev=c;
        a=b;
        b=c;
        c=a+b;
    }
    if(n-prev == c-n)
       std::cout<<prev<<" "<<c<<" ";
    else if((n-prev)<(c-n))
      std::cout<<prev;
    else
       std::cout<<c;
    return 0;
    
}