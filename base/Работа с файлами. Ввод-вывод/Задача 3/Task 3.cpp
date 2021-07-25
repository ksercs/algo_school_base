#include <iostream>
//#include <conio.h>
#include <fstream>

using namespace std;

int n,day;

int main()
{
    ifstream cin("Task 3.in");
    ofstream cout ("Task 3.out");
   	//cout <<"\n ¬ведите число от 1 до 365 ";
    cin >>n;
    day=(n-1)%7+1;
     cout /*<<"\n ƒень недели по счету, на который приходитс€ данный день "*/ <<day;
    //getch ();
    return 0;
}
