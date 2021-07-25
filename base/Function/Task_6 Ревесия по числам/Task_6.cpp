#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int ans, ch, d;
int k[8], h[8];

int freverse(int n)
{ 
   // cout <<n <<"gfh\n"; getch();
    int p, rev=0, m=0, i=1, j=1;
    p=n; //cout <<p<<"#\n"; getch();
     while ( p>0)
        {
            k[i]=p%10; //cout <<k[i] ; getch(); 
            i=i+1; 
            p=p/10; m=m+1; d=m;    
        }
        //cout <<m<<"\n"; getch();
     for (int t=m; t>=1; t--)
     {
         rev=k[t]*j+rev; j=j*10; cout <<rev <<"\n"; getch();
     }
   return rev; 
}

void in()
{
     ifstream cin ("Task_6.in");
    cin>>ch; //cout <<ch<<"\n"; getch();
}

void solution()
{
       ans=freverse(ch);
}

void out()
{
     ofstream cout ("Task_6.out");
     cout <<ans <<"\n"; 
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
