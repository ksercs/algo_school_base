#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <queue>
#include <utility>
#include <vector>
#include <climits>

#define SZ size()
#define VEC vector
#define PB push_back
#define MP make_pair
#define SS second
#define FF first
#define PII pair <int,int>
#define LL long long

#define IN_NAME input.txt
#define OUT_NAME output.txt


using namespace std;

const int POINT_COUNT = 100000;
const double M_PI = acos(-1.0);

double ans;
int n, x, y, fl;

pair <int, int> p[POINT_COUNT + 5];
pair <int, int> OX;


double get_Cross_Product(pair <int, int> pa1, pair <int, int> pa2)
{
    return pa2.first * pa2.second - pa1.second * pa2.first;
}

bool angle_cmp(pair <int, int> p1, pair <int, int> p2)
{
  return get_Cross_Product(p1, p2) > 0;
}

double f_corner(int i1, int i2)
{
    int cp, dp;
    pair <int, int> v1, v2;
    v1.first = x - p[i1].first;
    v1.second = y - p[i1].second;
    v2.first = x - p[i2].first;
    v2.second = y - p[i2].second;
    cp = v1.first * v2.second - v2.first * v1.second;
    dp = v1.first * v2.first + v1.second * v2.second;
    return abs(atan2(cp, dp)) / M_PI * 180;
}

void in()
{
   //ifstream cin("point.in");
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
}

void solution()
{
    OX.first = 1;
    OX.second = 0;
    sort(p, p+n);
    pair <int, int> sp = p[0];
    sort(p, p + n, angle_cmp);
    for (int i = 0; i < n; ++i) {
        cout << p[i].FF << " " << p[i].SS << "\n";
    }
    for (int i = 0; i < n; i++)
    {
//        cout << p[i].first << " " <<p[i].second << " " <<p[(i + 1) % n].first << " " << p[(i + 1) % n].second <<  "\n";
        ans += f_corner(i, (i + 1) % n);
//        cout << ans << "\n";
    }
}

void out()
{
  //   ofstream cout("point.out");
     cout << ans << "\n";
     if (ans == 360)
     {
         cout << "YES\n";
     }
     else
     {
         cout << "NO\n";
     }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
