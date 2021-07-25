
#include <iostream>
#include <conio.h>

using namespace std;

double x,y;

int main()
{
	cin >>x >>y; 
	if (x*x+y*y>=2*2)
	{
	   if (y>=0)
          	{
	             if ( ((x<=0) && ((y==2) || (x==-2)) ) || (x==2) )     {cout<<"YES";}
                 else       {cout<<"NO";}
            } 
        else       
            {
                 if ( (x==-2) || (y==-2) || (x==2)){cout<<"YES";}
                 else {cout<<"NO";}
            } 
    }
    else {cout<<"NO";}
getch();
return 0;
}
