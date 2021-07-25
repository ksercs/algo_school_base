#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

string STR, ans;

void in()
{
     cin >> STR;
}

/*void solution()
{
}*/

void out()
{
     cout <<STR.erase(1,3) <<"\n"; getch();
}

int main()
{
in();
//soluton();
out();
return 0;
}
