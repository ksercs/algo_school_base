#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int sum, k=1;
int a[10000];
     int main()
{
     while (cin>>a[k]) {if (a[k]==0) {break;} else {k=k+1;}}
     for ( int i=1; i<=k; i++)
     {cout << a[i] <<" ";}

getch();
return 0;
}
