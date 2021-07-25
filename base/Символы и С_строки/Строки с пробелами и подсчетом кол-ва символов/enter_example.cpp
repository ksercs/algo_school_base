#include <iostream>
#include <cstring>
#include <fstream>
 
using namespace std;

char str[100];
int y;

int main()
{
    ifstream cin ("enter_example.in");
    ofstream cout ("enter_example.out");
    
cin.getline (str,100);
y=strlen(str);  
cout <<str <<" " <<y<<"\n";

return 0;
}
