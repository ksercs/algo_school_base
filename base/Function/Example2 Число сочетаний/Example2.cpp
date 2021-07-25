#include <iostream>
#include <fstream>

using namespace std;

int n, k, f;

int factorial (int n)
{
         int f=1;
         for(int i=2;i<=n; i++)
           {
               f=f*i;
           }
         return f;
}

int binomial (int n, int k)
{
         return factorial(n)/(factorial(k)*factorial(n-k));
}

void in()
{
     ifstream cin ("Example2.in");
     cin >>n >>k;
}

void solution()
{
     f=binomial (n, k);     
}

void out()
{
     ofstream cout ("Example2.out");
     cout <<f <<"\n";
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
