#include <iostream>
#include <conio.h>

using namespace std;

double a,b,c;

int main()
{
	cin >>a >>b >>c;
	if ( (a+b<c) && (a+c<b) && (b+c<a) ) {cout<<"YES";}
	else                                 {cout<<"NO";}
getch();
return 0;
}

