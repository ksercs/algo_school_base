#include <iostream>
#include <conio.h>

using namespace std;

int ans,num;

int main()
{
   	cout <<"\n ������� ����� ������������� ����� ";
    cin >>num;
    ans=(num%1000)/100;
    cout <<"\n ������ �� ����� �������� �������� ����� " <<ans;
    getch ();
    return 0;
}
