#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string STR, S="abc";

void in()
{
     cin >> STR;
}

/*void solution()
{
}*/

void out()
{
     cout <<STR.insert(1,S) <<"\n"; getch();
}

int main()
{
in();
//soluton();
out();
return 0;
}
