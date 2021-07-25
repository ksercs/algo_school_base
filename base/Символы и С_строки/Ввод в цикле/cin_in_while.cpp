#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

unsigned char c;

int main()
{
    ifstream cin ("cin_in_while.in");
    ofstream cout ("cin_in_while.out");
while(cin >>c) 
{  
    cout <<c <<" " <<(int)c <<"\n\n"; 
}
return 0;
}
