#include <iostream>
#include <conio.h>

using namespace std;

double x, y;

int main()
{
	cin >>x >>y;
	if (x>0)
    {    
         if ( (y+x<=2) && (y+x>=-2) )  {cout<<"YES";}
         else             {cout<<"NO";}
    }
   else
    {
            if (x*x+y*y<=2*2) {cout<<"YES";}
         else             {cout<<"NO";}
         }
getch();
return 0;
}

