#include <iostream>
#include <fstream>

using namespace std;

int n, ans=0, p, m, a=1;

int NumberOfZero (int n)
{ 
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
                         if (((n/a)%10)==0) {ans=ans+1;}
                         a=a/10;
                }
         return ans;
}

void in()
{
     ifstream cin ("Task_3.in");
     cin >>n;
}

void solution()
{
     ans=NumberOfZero (n); 
}

void out()
{
     ofstream cout ("Task_3.out");
     cout <<ans <<"\n"; 
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
