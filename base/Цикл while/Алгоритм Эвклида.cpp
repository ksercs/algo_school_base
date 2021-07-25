#include <iostream>
#include <conio.h>

using namespace std;
 
int  a=18, b=24, c, r=1, nod;

int main()
{  
    if (a<b) {c=a; a=b; b=c;}
                      while (r>0)
                  
                            { 
                              //q=a/b;
                              r=a%b;
                              a=b; b=r;
                              nod=a;
                            }
                                          {cout << nod;} 
           
 getch();
return 0;
}
