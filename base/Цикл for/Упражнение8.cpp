#include <iostream>
#include <conio.h>
using namespace std;
 
int a, n, i, s=0;

int main()
{ setlocale(0,"rus");
       cin >>n;
    for (i=1; i<=n; i++)
    {
        cin >>a;
        s=s+a;
    }
     cout<<s<<"\n";
     
 getch();
return 0;
}
