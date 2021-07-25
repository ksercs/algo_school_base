#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int n, ans=0, p, m, a=1;

     int main()
{
     cin >>n;
     p=n;
     while (p!=0)
        {
            p=p/10; m=m+1; 
        }
       for (int g=1; g<m; g++)
         {
             a=a*10; 
         }
         //cout <<m <<"\n"<<a <<"\n"<<n;
         for(int i=1; i<=m; i++)
                { 
                         if (((n/a)%10)==0) {ans=ans+1;}
                         a=a/10;
                }
                     cout <<ans <<"\n";    
getch();
return 0;
}
