#include <iostream>
#include <conio.h>

using namespace std;

int n, p, k, m=0, ans=0, a=1, b=10;

int main()
{
     cin >>n;
     p=n;
     while ( n!=0)
        {
            n=n/10; m=m+1;
        }
         for (int g=1; g<m; g++)
         {
             a=a*10; 
         }
         for(int i=1; i<=m; i++)
                { 
                         k=(p/a)%b; /*cout <<k <<" ";*/ a=a/10; ans=ans+k;
                }
     cout <<ans <<"\n";
getch();
return 0;
}
