#include <iostream>
#include <conio.h>

using namespace std;
 
double  x=10.0, y=100.0, k=0.0, i=0.0;

int main()
{  
           while(i<y)
            { 
               i=i+x;
               x=x*1.1;
               k++;
            }
            cout << k <<"\n"; 
 getch();
return 0;
}
