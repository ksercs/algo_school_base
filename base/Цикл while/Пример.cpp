#include <iostream>
#include <conio.h>

using namespace std;
 
int Ndigits=0, n=9876;

int main()
{
     while(n)
     {
         Ndigits++; 
         n=n/10;
     }
     cout << Ndigits <<"\n";
 getch();
return 0;
}
