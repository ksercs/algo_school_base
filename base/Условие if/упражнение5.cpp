#include <iostream>
#include <conio.h>

using namespace std;

double a, b, c;

int main()
{
    cin >>a >>b >>c;
	if ( (a!=b) && (a!=c) && (b!=c) ) {cout<<"0";}
	else
	{
        if   ( (a==b) && (a==c) ) {cout<<"3";}
        else                      {cout<<"2";}
    }
    getch();
    return 0;
}
