#include <bits/stdc++.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    int num, sqr, temp, last;
    int n =0;
 
    std::cin>>num;
 
    sqr = num*num; 
    temp = num;
 
    
    while(temp>0){
        n++;
        temp = temp/10;
    }
 
    
    int den = floor(pow(10,n));
    last = sqr % den;
 
    if(last == num)
    std::cout<<"Automorphic Number";
    else
        std::cout<<"Not an Automorphic Number";
 
    return 0;
}