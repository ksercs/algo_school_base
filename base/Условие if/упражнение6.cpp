#include <iostream>
#include <conio.h>

using namespace std;

double a, b,    x, y;

int main()
{
	cin >>a >>b     >>x >>y;
	if   (a==x) {cout<<"YES";}
	else     
	{ 
             if  (b==y) {cout<<"YES";}
             else       {cout<<"NO";}
    }
getch();
return 0;
}
