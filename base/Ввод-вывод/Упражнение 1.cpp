#include <iostream>
#include <conio.h>

using namespace std;

int a,b,c,sum,num;

int main()
{
   	cout <<"\n ¬ведите целое положительное трехзначное число ";
    cin >>num;
    a=num%10;
    b=(num%100)/10;
    c=(num%1000)/100;
    sum=a+b+c;
    cout <<"\n —умма числовых значений числа равна " <<sum;
    getch ();
    return 0;
}
