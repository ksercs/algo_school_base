#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

unsigned char c;

int main()
{   
    ifstream cin ("Task_3.in");
    ofstream cout ("Task_3.out");
cin >>c;
if ( ( (int) c>=97) && (c<=122) ) { 
                                        c=c-32;
                                        cout <<c<<"\n"; 
                                  } 
else                              {cout <<c<<"\n\n";}
return 0;
}
