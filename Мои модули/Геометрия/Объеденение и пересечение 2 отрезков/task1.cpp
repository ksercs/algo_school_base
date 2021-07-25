#include <iostream>
#include <fstream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

vector <pair <int, int> > sg;

pair <int, int> sg1;
pair <int, int> sg2;

pair <int, pair <int, int> > intersection(pair <int, int> pi1, pair <int, int> pi2)
{
    if (pi1.second < pi2.first) {return make_pair(0, make_pair(0, 0) );}
    else                        {return make_pair(1, make_pair(pi2.first, min(pi1.second, pi2.second) ) );}
}

pair <int, pair <int, int> > unit(pair <int, int> pi1, pair <int, int> pi2)
{
    if (pi1.second < pi2.first) {return make_pair(0, make_pair(0, 0) );}
    else                        {return make_pair(1, make_pair(pi1.first, max(pi2.second, pi1.second) ) );}
}

void cmp_koor(pair <int,int> &sg)
{
    if (sg.first > sg.second) {swap(sg.first, sg.second);}
}

void cmp_sg()
{
  for (int i= 0; i < sg.size(); i++)
  {
      cmp_koor(sg[i]);
  }
  sort(sg.begin(), sg.end());
}

void in()
{
    ifstream cin("task.in");
    cin >> sg1.first >> sg1.second >> sg2.first >> sg2.second;
    sg.push_back(sg1);
    sg.push_back(sg2);
}

void solution()
{
    cmp_sg();
    //cout << sg1.first <<" " << sg1.second << "\n" << sg2.first<< " " << sg2.second<<"\n";
}

void out()
{
    ofstream cout("task.out");
    pair <int, pair <int, int> > ans;
    cout << "INTERSECTION:  ";
    ans = intersection(sg1, sg2);
    if (ans.first == 0)  cout << "NONE INTERSECTION\n";
    else                 cout << "(" << ans.second.first << ", " << ans.second.second << ")\n";
    cout << "UNIT:  ";
    ans = unit(sg1, sg2);
    if (ans.first == 0)     cout << "(" << sg1.first << ", " << sg1.second << ") and (" << sg2.first << ", " << sg2.second << ")\n";
    else                    cout << "(" << ans.second.first << ", " << ans.second.second << ")\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
