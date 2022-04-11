#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int i,count=0,max=0;
    getline(cin,ch);
    
    for(i=0;ch[i]!=NULL;i++)
      {
          if(ch[i]==' ')
          {
              if(count>max)
                max=count;
                count=0;
          }
          else
             count++;
      }
      if(count>max)
        max=count;
      cout<<max;
      return 0;
}