#include <iostream>
//#include <conio.h>
#include <fstream>

using namespace std;

int n,day;

int main()
{
    ifstream cin("Task 3.in");
    ofstream cout ("Task 3.out");
   	//cout <<"\n ������� ����� �� 1 �� 365 ";
    cin >>n;
    day=(n-1)%7+1;
     cout /*<<"\n ���� ������ �� �����, �� ������� ���������� ������ ���� "*/ <<day;
    //getch ();
    return 0;
}
