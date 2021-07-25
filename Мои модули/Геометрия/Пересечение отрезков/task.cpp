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

using namespace std;

pair <int, int> sg1;
pair <int, int> sg2;

pair <int, pair <int, int> > intersection(pair <int, int> pi1, pair <int, int> pi2)
{
    if (pi1.first > pi1.second) {swap(pi1.first, pi1.second);}
    if (pi2.first > pi2.second) {swap(pi2.first, pi2.second);}
    if (pi1.first > pi2.first)  {swap(pi1.first, pi2.first); swap(pi1.second, pi2.second);}
    if (pi1.second < pi2.first) {return make_pair(0, make_pair(0, 0) );}
    else                        {return make_pair(1, make_pair(pi2.first, min(pi1.second, pi2.second) ) );}
}

void in()
{
    //ifstream cin("trains.in");
    cin >> sg1.first >> sg1.second >> sg2.first >> sg2.second;
}

void solution()
{
}

void out()
{
    //ofstream cout("trains.out");
    pair <int, pair <int, int> > ans;
    ans = intersection(sg1, sg2);
    if (ans.first == 0)  cout << "NONE INTERSECTION\n";
    else                 cout << "(" << ans.second.first << ", " << ans.second.second << ")\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
