#include <iostream>
#include <fstream>

using namespace std;

int ans, k=0;
int a[100];

int s (int t)
{ 
    int summa=0;
   for (int i=0; i<t; i++)
   {
       summa=summa+a[i];       
   }
   return summa;
}

void in()
{
     ifstream cin ("Task_5.in");
     while (cin>>a[k]) 
     {
           if (a[k]==0) {break;} 
           else {k=k+1;}
     }
}

void solution()
{
         ans=s(k);
}

void out()
{
     ofstream cout ("Task_5.out");
     cout <<ans <<"\n"; 
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
