#include <iostream>
#include <conio.h>

using namespace std;

double x, y;

int main()
{
	cin >>x>> y;
	if   (x==y)  {cout<<"0";}
    else
	{
		if   (x>y)  {cout<<"1";}
		else        {cout<<"2";}
	}
getch();
return 0;
}

