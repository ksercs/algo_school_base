#include <iostream>
#include <conio.h>

using namespace std;

int n,day;

int main()
{
   	cout <<"\n ������� ����� �� 1 �� 365 ";
    cin >>n;
    day=(n-1)%7;
    cout <<"\n ���� ������ �� �����, �� ������� ���������� ������ ���� " <<day;
    getch ();
    return 0;
}
