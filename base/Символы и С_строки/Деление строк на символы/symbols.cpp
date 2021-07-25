#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[100];
int y, i;

int main()
{
    ifstream cin ("symbols.in");
    ofstream cout ("symbols.out");
cin.getline (str,89);
y=strlen(str);
   for (i=0; i<=y-1; i++)  
   {
       cout <<str[i]<<"\n";
   }
return 0;
}
