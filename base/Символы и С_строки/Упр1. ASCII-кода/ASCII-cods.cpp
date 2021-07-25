#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

unsigned char c;

int main()
{
    ofstream cout ("ASCII-ñods.out");
       
    for (int c=32; c<105; c++) 
    {  
     cout <<(int) c <<" " << (char) c <<"\n\n"; 
    }
return 0;
}
