#include <iostream>
#include <conio.h>

using namespace std;

double a, b, x, y;

int main()
{
	cin >>a >>b   >>x >>y;
	 if ( (x==a-1) || (x==a+1) )
     {
         if ( (y==b+1)|| (y==b-1) ) {cout<<"YES\n";} 
         else     {cout<<"NO\n";} 
     }
     else     {cout<<"NO\n";} 
getch();
return 0;
}
