#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

unsigned char c;

int main()
{   
    ifstream cin ("Task_2.in");
    ofstream cout ("Task_2.out");

cin >>c;

if ( ( (int) c>=49) && (c<=57) ) {cout <<"YES"<<"\n";}
else                             {cout <<"NO"<<"\n\n";}

return 0;
}
