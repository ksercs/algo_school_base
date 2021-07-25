#include <iostream>
#include <conio.h>

using namespace std;
 
int  n=15, k=1;

int main()
{  
           while(n>2)
            { 
               n=n/2;
               k++;
            }
            cout << k <<"\n"; 

 getch();
return 0;
}
