#include <iostream>
#include <conio.h>
using namespace std;

int n, s=0, i;

int main()
{
    cin>>n;
    for (i=1; i<=n; i++)
     {
         s=s+(i-1)*i;
     }
     cout<<s<<"\n";
 getch();
return 0;
}
