#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char a[100], b[100];
int x, y, i, g, ans=0;

int main()
{
    ifstream cin ("Task_5.in");
    ofstream cout ("Task_5.out");
       
       cin >>a >>b;
       x=strlen(a);
       y=strlen(b);
       if (x==y) {
                     for (i=0; i<x; i++)
                     {
                      if (a[i]!=b[i]) {ans++; break;}
                     }
                 }
       if (ans>0) {cout <<"NO\n";}
       else       {cout <<"YES\n";}
return 0;
}
