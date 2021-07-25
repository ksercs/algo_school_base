#include <iostream>
#include <algorithm>

using namespace std;

int n=10;

int mass[]={5, 1, 4, 7, 8, 1, 11, 2,  3, 7};

bool cmp(int a, int b)
{
    cout << a << " " << b  << "\n";
    cout << (!(a%2) && b%2) << "  1\n";
    if (!(a%2) && b%2) return true;
    if (!(a%2) && !(b%2)) {cout << (a<b) << "  2\n"; return a<b;}
    if (a%2 && b%2)       {cout << (a>b) << "  3\n"; return a>b;}
    return false;
}

int main()
{
  sort(mass, mass+n, cmp);
  for (int i = 0; i < n; i++)
  {
      cout << mass[i] << " ";
  }
  cout << "\n";
}
