#include <iostream>
#include <cstring> 
using namespace std;
char str[89], s, a;
int b, y, i, l;

int main()
{ setlocale(0,"rus");  
    cin >>str;
    y=strlen(str);     
     if (y%2) {b= y/2;}
     else     {b=(y-1)/2;}
         for (i=0; i<=(b-1); i++)
         for (l=(y-1); l>(b-1); l--)
             {
               s=str[i];
               a=str[l];
               cout <<s <<" " <<a<<"\n";
             }
system("PAUSE");return 0;
}
