#include <iostream>
#include <fstream>

using namespace std;

int ch, y;

bool IsPrime (int n)
{ 
    int g;
    for (g=2; g<n; g++)
        {     
            if (n%g==0) {y++;}
        }
    return y;
}

int main()
{
     ifstream cin ("Task_7.in");
     ofstream cout ("Task_7.out");
    cin>>ch;
    y=(bool) IsPrime (ch);
    if (y>0) {cout <<"composite\n";}
    else     {cout <<"prime\n";}
    
return 0;
}
