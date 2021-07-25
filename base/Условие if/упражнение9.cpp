#include <iostream>
#include <conio.h>

using namespace std;

double a, b, c;

int main()
{
	cin >>a >>b >>c;
	if ( (a<b+c) && (b<a+c) && (c<a+b) )
       {
         if ( (a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b) ) {cout<<"rectangular";} 
         else
             if ((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<a*a+b*b)){cout<<"acute";} 
                 else 
                          if ((a*a>b*b+c*c) || (b*b>a*a+c*c) || (c*c>a*a+b*b)){cout<<"obtuse";} 
                          else                       {cout<<"impossible";}    
        }
    else {cout<<"impossible";}
    getch ();
    return 0; 
}


