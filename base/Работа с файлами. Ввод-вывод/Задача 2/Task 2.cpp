#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int ans,num;

int main()
{
    ifstream cin("Task 2.in");
    ofstream cout ("Task 2.out");
   	//cout <<"\n ¬ведите целое положительное число ";
    cin >>num;
    ans=(num%1000)/100;
    cout /*<<"\n “ретье от конца числовое значений цифры "*/ <<ans;
    getch ();
    return 0;
}
