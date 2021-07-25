#include <iostream>
#include <cstring> 
#include <fstream>

using namespace std;

char y[100], str[100];
int x, i, m=0, a;

int main()
{
    ifstream cin ("Task_12.in");
    ofstream cout ("Task_12.out");
    
cin.getline (str,100);
x=strlen(str);
for (i=0; i<x; i++)
    {
      if (str[i]==' ') {
                        for (a=i; a<x; a++)
                         {
                          str[a]=str[a+1];        
                         }
                       }
    } 
   strcpy(y,strrev(str));
   if (strcmp (str, y)==0) {cout <<"YES"<<"\n";}
   else                    {cout <<"NO"<<"\n";}
  
return 0;
}
