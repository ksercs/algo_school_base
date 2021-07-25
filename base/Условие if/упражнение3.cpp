#include <iostream>
#include <conio.h>

using namespace std;

double a,b,c;

int main()
{
	cin >>a >>b >>c;
	if ( (a>=b) && (a>=c) ) {cout<<a;}
	else
	{
		if  ( (b>=a) &&( b>=c) ) {cout<<b;}
		else                     {cout<<c;}          
	
    }
getch();
return 0;
}

