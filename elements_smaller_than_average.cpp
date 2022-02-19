#include<bits/stdc++.h>
int main()
{
int n,d[10],i;		
std::cin>>n;
for(int i=0;i<n;i++)
	std::cin>>d[i];
int sum=0;
for(int i=0;i<n;i++)
sum= sum+d[i];
				 int a=sum/n;
int c=0;
				for (int i=0;i<n;i++)
				    if (d[i]<=a)
				        c+=1;
				std::cout<<c;
	
    return 0;
}