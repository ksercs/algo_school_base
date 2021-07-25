#include <iostream>
#include <fstream>

using namespace std;

int k, ans;
char chsl[8];

char pldr(int k)
{ 
  sprintf(chsl, "%d", k);
   return chsl;
}

void in()
{
     ifstream cin ("Task_8.in");
     cin>>k;
}

void solution()
{
         ans=(int) pldr(k);  
}

void out()
{
     ofstream cout ("Task_8.out");
     cout <<ans <<"\n"; 
}

int main()
{
 in();
 solution();
 out();    
return 0;
}
