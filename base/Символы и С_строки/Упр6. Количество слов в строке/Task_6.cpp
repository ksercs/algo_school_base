#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[10], strn[10], strh[10];
int x, y, i, ans=0, a;

int main()
{
    ifstream cin ("Task_6.in");
    ofstream cout ("Task_6.out");
   cin.getline (str,89);
   y=strlen(str);
   for (i=0; i<=y-1; i++)  
   {
      // cout <<str[i]<<"\n\n\n\n";
       if ( str[i]==32) {ans=ans+1;}
   }
   a=ans+1;
   cout <<a<<"\n";
return 0;
}
