#include <iostream>
#include <fstream>

using namespace std;

int n, x=0, y=9, p, m, a=1, d;

int MaxDigit (int n)
{ 
   d=n;
   p=n;
     while (p!=0)
        {
            p=p/10; m=m+1; 
        }
       for (int g=1; g<m; g++)
         {
             a=a*10; 
         }
         //cout <<m <<"\n"<<a <<"\n"<<n;
         for(int i=1; i<=m; i++)
                { 
                         if (((n/a)%10)>x) {x=(n/a)%10;}
                         a=a/10;
                }
         return x;
}

int MinDigit (int n)
{ 
   m=0; a=1; 
   p=d;
     while (p!=0)
        {
            p=p/10; m=m+1; 
        }
       for (int g=1; g<m; g++)
         {
             a=a*10; 
         }
         //cout <<m <<"\n"<<a <<"\n"<<n;
         for(int i=1; i<=m; i++)
                { 
                         if (((d/a)%10)<y) {y=(d/a)%10;}
                         a=a/10;
                }
         return y;
}

void in()
{
     ifstream cin ("Task_4.in");
     cin >>n;
}

void solution()
{
     x=MaxDigit(n);
     y=MinDigit(n);
}

void out()
{
     ofstream cout ("Task_4.out");
     cout <<x <<" " <<y <<"\n"; 
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
