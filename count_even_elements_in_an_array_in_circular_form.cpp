#include<bits/stdc++.h>
int main()
{
    
int n,a[20],i;
std::cin>>n;

for(int i=0;i<n;i++)
	std::cin>>a[i];
int c=0;
for(int i=1;i<n-1;i++)
    if (a[i-1]%2==0 && a[i+1]%2==1)
				            c+=1;
    else if (a[i-1]%2==1 && a[i+1]%2==0)
				            c+=1;   
if ((a[1]%2==0 && a[1]%2==1) || (a[1]%2==1 && a[1]%2==0))
				    c+=1;
if( (a[0]%2==0 && a[2]%2==1) || (a[0]%2==1 && a[2]%2==0))
				    c+=1;
std::cout<<c;
return 0;
}