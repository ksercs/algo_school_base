#include <iostream>
#include <fstream>

using namespace std;

int n, k, m=0, ans=0, a=1, b=10;

/*int mol (int n)
{
    while ( n!=0)
        {
            n=n/10; m=m+1;
        }
    m=m-1;
    return m;
}*/

int SumOfDigits (int n)
{
         int p=n;
     while ( n!=0)
        {
            n=n/10; m=m+1;
        }
         for (int g=1; g<m; g++)
         {
             a=a*10; 
         }
         for(int i=1; i<=m; i++)
                { 
                         k=(p/a)%b; /*cout <<k <<" ";*/ a=a/10; ans=ans+k;
                }
     cout <<ans <<"\n";
         return ans;
}

void in()
{
     ifstream cin ("Task_2.in");
     cin >>n;
}

void solution()
{
     ans=SumOfDigits (n); 
}

void out()
{
     ofstream cout ("Task_2.out");
     cout <<ans <<"\n";
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
