#include <iostream>
#include <conio.h>
using namespace std;

int n, i, j, s=0;

int main()
{ setlocale(0,"rus");
    cin >>n;
    for (i=1; i<=n; i++ )
        for (int j=1; j<=i; j++)
    {
        s=s+j;
    }      
         cout<<s<<"\n";
 getch();
return 0;
}
