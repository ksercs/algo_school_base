#include <iostream>
#include <conio.h>

using namespace std;

double x,y;

int main()
{
	cin>>x>>y;
	if (x>=0&&x<=2)
    {    
         if (y>=0&&y<=1)  {cout<<"YES";}
         else             {cout<<"NO";}
    }
getch();
return 0;
}
