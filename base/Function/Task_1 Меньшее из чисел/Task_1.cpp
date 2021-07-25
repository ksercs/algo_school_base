#include <iostream>
#include <fstream>

using namespace std;

int ans, a, b, c, d;

int min4 (int a, int b, int c, int d)
{
         for(int i=1; i<=4; i++)
           {
               if (a>b) {a=b; b=c;}
               else     {b=c; c=d;}
           }
         ans=a;
         return ans;
}

void in()
{
     ifstream cin ("Task_1.in");
     cin >>a >>b >>c >>d;
}

void solution()
{
     ans=min4 (a, b, c, d);     
}

void out()
{
     ofstream cout ("Task_1.out");
     cout <<ans <<"\n";
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
