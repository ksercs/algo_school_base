#include <iostream>
#include <conio.h>

using namespace std;
 
int  n=8;

int main()
{  
           while(n>2)
            { 
               n=n/2;
            }
             if(n/2==1) {  cout << "YES" <<"\n"; }
    if(n%2!=0)  {  cout << "NO" <<"\n"; }
 getch();
return 0;
}
