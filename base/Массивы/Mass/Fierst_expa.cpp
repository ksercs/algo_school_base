#include <iostream>
#include <fstream>

using namespace std;

int n, i, g, k=0;
int a[10];

int main()
{
    ifstream cin("mass.in");
    ofstream cout("mass.out");
 cin  >>n;
 for (i=0; i<n-1; i++)
 {
 
     cin >>a[i];
 }
 for (g=0; g<n-1; g++)
 {
     if (a[g]>a[n-1]) {cout <<a[g] <<" "; k++;}
 }
// cout <<k <<"\n";
return 0;
}
