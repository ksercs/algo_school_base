#include <iostream>
#include <fstream>
#include <cmath>

using namespace std; 

int a[1000], n;
double d, ans;

double geom (double n) 
{ 
    ans=sqrt(a[n-1]*a[n+1]);
    return ans;
}

int main()
{
    ifstream cin ("Task_3.in");
    ofstream cout ("Task_3.out");
    
  cin>>a[1] >>n >>d;
  cout <<geom(n) <<"\n";    
    
return 0;
}
