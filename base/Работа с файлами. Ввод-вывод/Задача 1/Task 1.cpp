#include <iostream>
//#include <conio.h>
#include <fstream>

using namespace std;

int a,b,c,sum,num;

int main()
{ 
    ifstream cin("Task 1.in");
    ofstream cout ("Task 1.out");
   	// cout <<" Vvedite 3-znachnoe chislo"<<"\n\n" ;
    cin >>num;
    // cout <<" Vi vveli chislo:"<<" " <<num<<"\n";
    a=num%10;
    b=(num%100)/10;
    c=(num%1000)/100;
    sum=a+b+c;
    cout <<"\n Summa chisel ravna " <<sum;
    //getch ();
    return 0;
}
