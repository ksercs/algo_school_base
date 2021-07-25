#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int n, x=0, y=9, p, m, a=1;

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
         cout <<m <<"\n"<<a <<"\n"<<n <<"\n\n\n\n\n";
         for(int i=1; i<=m; i++)
                { 
                         if (((n/a)%10)<y) {y=(n/a)%10;}
                         if (((n/a)%10)>x) {x=(n/a)%10;}
                         a=a/10;
                }
                     cout <<x <<" " <<y <<"\n";    
getch();
return 0;
}
