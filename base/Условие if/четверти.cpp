#include <iostream>
#include <conio.h>

using namespace std;

double x,y;
int main()
{
     cin>>x>>y;
     if (x>0)
     {
         if (y>0) {cout<<"������ ��������\n";} // x>0, y>0
         else     {cout<<"��������� ��������\n";} // x>0, y<0
     }
     else
     {
         if (y>0) {cout<<"������ ��������\n";}  // x<0, y>0
         else     {cout<<"������ ��������\n";}  // x<0, y<0
     }
getch();
return 0;
}
