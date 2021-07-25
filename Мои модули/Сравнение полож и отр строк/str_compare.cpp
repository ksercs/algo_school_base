#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int ch, i1=0, i2=0;
string pol[10000], otr[1000], ind[1000];
string stroka;

int str_cmp(string a, string b)
{

                                if (a.size() < b.size()) {return 1;}
                                 return (a<b);
}

void in()
{
     ifstream cin ("umn.in");
     cin >>ch;
     for (int i=0; i<ch; i++)
     {
         cin >>stroka;
         if (stroka[0] == '+') {stroka.erase(0,1); pol[i1]=stroka; i1++;}
         else{
              if (stroka[0] == '-') {stroka.erase(0,1); otr[i2]=stroka; i2++;}
              else {pol[i1]=stroka; i1++;}
             }
     }
}

void solution()
{ 
    sort(otr, otr + i2, str_cmp); 
    sort(pol, pol + i1, str_cmp);
}

void out()
{
     ofstream cout("umn.out");
     for (int i=i2-1; i>=0; i--)
     {
         cout <<"-" <<otr[i] <<"\n";
     }
     for (int i=0; i<i1; i++)
     {
         cout <<pol[i] <<"\n";
     }
}

int main()
{
    in();
    solution();
    out();
}
