#include <iostream>
#include <conio.h>

using namespace std;

int a,b,c,sum,num;

int main()
{
   	cout <<"\n ������� ����� ������������� ����������� ����� ";
    cin >>num;
    a=num%10;
    b=(num%100)/10;
    c=(num%1000)/100;
    sum=a+b+c;
    cout <<"\n ����� �������� �������� ����� ����� " <<sum;
    getch ();
    return 0;
}
