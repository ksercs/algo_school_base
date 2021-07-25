#include <iostream>
#include <fstream>

using namespace std;

int n, i, k;
int a[101];

int main()
{
    ifstream cin ("neighbours.in");
    ofstream cout ("neighbours.out");
cin >>n;
 for (i=1; i<=n; i++)
 {
       cin >>a[i];
 }
 for (i=2; i<n; i++)
 {
         if ( (a[i-1]<a[i]) && (a[i]>a[i+1]) )   {k=k+1;}
 }
 cout <<k <<"\n";
return 0;
}
