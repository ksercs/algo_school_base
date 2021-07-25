#include<iostream>
#include<fstream>

using namespace std;

int a, b, c;

int main()
{
  ifstream cin("A.in");
  ofstream cout("A.out");
  cin >>a >>b;
  c=a+b;
  cout <<c;
  return 0;
}
