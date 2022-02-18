#include<bits/stdc++.h>
#include<math.h>
int main()
{
    int n,d,r,sum=0,temp;
    std::cin>>n;
    d=(int)log10(n)+1;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+ceil(pow(r,d));
        n=n/10;
        d--;
    }
    if(sum==temp)
     std::cout<<"True";
    else
       std::cout<<"False";
    return 0;
}