#include <iostream>
#include <conio.h>

using namespace std;

double a, b,    x, y;

int main()
{
	cin >>a >>b    >>x >>y;
	if ( (b==y) && ((x==a+1)|| (x==a-1)) ) {cout<<"YES";}
	else     
	{ 
             if   ( (a==x) && ((y==b+1) || (y==b-1)) ) {cout<<"YES";}
             else                        {cout<<"NO";}
    }
getch();
return 0;
}
