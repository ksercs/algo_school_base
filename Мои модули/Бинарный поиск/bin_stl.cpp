// lower_bound/upper_bound example
#include <iostream>
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>

using namespace std;

int X = 20, Y = 6;
int myints[] = {10,20,30,30,20,10,10,20};
vector<int> v(myints,myints+8);
vector<int>::iterator low,up;

int main ()
{
  sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30
  low = lower_bound(v.begin(), v.end(), X); //         ^
  up = upper_bound (v.begin(), v.end(), X); //                  ^

  cout << "lower_bound at position " << (low- v.begin()) << endl;
  cout << "upper_bound at position " << (up - v.begin()) << endl;
  if ( binary_search (v.begin(), v.end(), Y) ) cout << "found!\n";
  else                                         cout << "not found.\n";

  return 0;
}
