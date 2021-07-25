#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string STR;

void in()
{
     cin >> STR;
}

/*void solution()
{
}*/

void out()
{
     cout <<STR.substr(2, 3) <<"\n"; getch();
}

int main()
{
in();
//soluton();
out();
return 0;
}
