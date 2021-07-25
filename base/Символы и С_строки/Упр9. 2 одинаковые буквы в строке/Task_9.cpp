#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char str[50], s, z;
int y, i, w, q=1 ;

int main()
{
    ifstream cin ("Task_9.in");
    ofstream cout ("Task_9.out");   
   cin.getline (str,89);
   y=strlen(str);
   for (i=0; i<=y-1; i++) 
        {
             for (w=q; w<=y-1; w++)  
              {
               s=str[i];
               z=str[w];
               if (s==z) {cout <<s<<"\n";}
              } 
        q=q+1;
        }

return 0;
}
