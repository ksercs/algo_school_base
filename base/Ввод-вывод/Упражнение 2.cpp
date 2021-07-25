#include <iostream>
#include <conio.h>

using namespace std;

int n,day;

int main()
{
   	cout <<"\n ¬ведите число от 1 до 365 ";
    cin >>n;
    day=(n-1)%7;
    cout <<"\n ƒень недели по счету, на который приходитс€ данный день " <<day;
    getch ();
    return 0;
}
