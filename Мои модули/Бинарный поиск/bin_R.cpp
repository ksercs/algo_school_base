#include <iostream>
#include <algorithm>
#include <utility>

#define mp make_pair
#define ss second
#define ff first
#define pii pair <int, int>

using namespace std;

const int MAX_COUNT = 1000000 + 5;

int mass[MAX_COUNT];
int n, ch;

pii BS_R(int L, int R, int X)
{
    if (L > R)  return mp(L, 0);
    int M = L+(R-L)/2;
    //cout <<L <<" " <<R << " " << M <<"\n";
    if (mass[M] == X)   return mp(M,1);
    if (mass[M] < X)    return BS_R(M+1, R, X);
    if (mass[M] > X)    return BS_R(L, M-1, X);
}



void in()
{
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        cin >> mass[i];
    }
    cin >> ch;
}

void solution()
{
    sort(mass + 1, mass + n + 1);
}

void out()
{
    pii ans = BS_R(1, n, ch);
    if (ans.ss == 1) cout <<"FOUND!!!  index = " << ans.ff << endl;
    else             cout <<"NOT FOUND!!!  can stay at index = " << ans.ff << endl;
}

int main()
{
  in();
  solution();
  out();
  return 0;
}
