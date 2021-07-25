#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[50],  f;
int a=0, y, t=0, i, x=0, k, g;

int main()
{   
    ifstream cin ("Task_7.in");
    ofstream cout ("Task_7.out");
   cin.getline (str,100);
   y=strlen(str); 
   for (i=0; i<=y-1; i++)  
   { 
     a=a+1;
     if (str[i]!=' ') {
                        t=t+1;
                        if (t>x) {x=t; k=a;}
                      }
     else             {
                        t=0;
                      }
   }
   for (g=k-x; g<=k; g++)
     {
     f=str[g];
     cout<<f;
     }
     cout <<x<<"\n\n";
return 0;
}

