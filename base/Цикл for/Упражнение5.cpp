#include <iostream>
#include <conio.h>
using namespace std;

int a, n, i, s=1;

int main()
{
    cin >>a >>n;
    for (i=1; i<=n; i++ )
    {
        s=s*a;
    }
        cout<<s<<"\n";
 getch();
return 0;
}
