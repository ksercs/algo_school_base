#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

const int K = 50;

int n, k, ans;

string str;
vector <char> ch (K);

int ind_num()
{
  num = 0;
  for (int i = 0; i <= k; i++)
  {
      for  (int j = choose[i-1]+1; j <= choose[i]-1; j++)
      num += pas[n - j][k - i];
  }
  return num;
}

void in()
{
    ifstream cin ("ekv.in");
    cin >> n >> k;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        ch.push_back(str[i]);
    }
}

void solution()
{
    ans = find_num();
}

void out()
{
     ofstream cout ("ekv.out");
     cout << ans << "\n";
}

int main()
{
    in();
    solution();
    out();
return 0;
}
