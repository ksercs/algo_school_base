#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[500], s, l;
int a, b, x, y, k=0;

int main()
{
    ifstream cin ("Task_8.in");
    ofstream cout ("Task_8.out");  
   cin >>str;
   y=strlen(str);
   if (y%2==0) {
                b=y/2;
                for (a=0; a<=(b-1); a++) 
                for (x=(y-1); x>(b-1); x--) 
                {
                  s=str[a];
                  l=str[x];
                  if (s==l) {k=k+1;}
                }
                }
   else         {
                b=(y-1)/2;
                for (a=0; a<(b-1); a++) 
                for (x=(y-1); x>(b-1); x--) 
                {
                  s=str[a];
                  l=str[x];
                  if (s==l) {k=k+1;}
                }
                }
   if (k==b) {cout <<"YES\n";}
   else      {cout <<"NO\n";}


return 0;
}

