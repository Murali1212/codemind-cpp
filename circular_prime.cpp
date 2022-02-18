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
int reverse(int p)
{
    int i,sum=0,r;
    while(p>0)
    {
        r=p%10;
        sum=sum*10+r;
        p=p/10;
    }
    return sum;
}
int main()
{
    int m,n,i,c=0;
    std::cin>>m;
    if(!prime(m))
        std::cout<<"not prime";
    else if(prime(reverse(m)))
        std::cout<<"circular prime";
    else
        std::cout<<"prime but not a circular prime";
    return 0;

}