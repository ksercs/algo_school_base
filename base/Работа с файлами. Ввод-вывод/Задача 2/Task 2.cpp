#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int ans,num;

int main()
{
    ifstream cin("Task 2.in");
    ofstream cout ("Task 2.out");
   	//cout <<"\n ������� ����� ������������� ����� ";
    cin >>num;
    ans=(num%1000)/100;
    cout /*<<"\n ������ �� ����� �������� �������� ����� "*/ <<ans;
    getch ();
    return 0;
}
