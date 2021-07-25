#include <iostream>
#include <conio.h>

using namespace std;

double x, y;

int main()
{
	cin >>x >>y; 
	if (x*x+y*y<=1)
	  {   if ( (y>=x+1) // (0,1)-(-1,0) 
            || (y<=-x-1) // (1,0)-(0,1)
            || (y<=x-1)// (1,0)-(0,-1) 
            || (y>=-x+1) // (-1,0)-(0,-1)
             )   
              {cout<<"YES";}
          else       {cout<<"NO";}
      }
    else       {cout<<"NO";}
getch();
return 0;
}
