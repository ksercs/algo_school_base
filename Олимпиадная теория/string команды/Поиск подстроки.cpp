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
     cout <<STR.find("3456") <<"\n"; getch();
     cout <<STR.rfind("3456") <<"\n"; getch();
}

int main()
{
in();
//soluton();
out();
return 0;
}
