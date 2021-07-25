#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

struct fcmp
{
  bool operator()(const int& a, const int& b)const
  {
        if (!(a%2) && b%2) return true;
        if (!(a%2) && !(b%2))  return a<b;
        if (a%2 && b%2)        return a>b;
        return false;
  };
};
set <int, fcmp> st;
set <int, fcmp>:: iterator it;

int main()
{
  for (int i = -10; i<=10; i++)
  {
      st.insert(i);
  }
  for (it = st.begin(); it != st.end(); it++)
  {
      cout << (*it) <<" ";
  }
  cout << "\n";
return 0;
}
