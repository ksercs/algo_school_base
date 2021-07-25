#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

string str;
int q, ln, lvl, fl;

pair <int ,int> tree[262143+2];

vector <int> ans;

pair <int ,int> pred(int x)
{
  return tree[(x/2)];
}

pair <int ,int> potom(int x, int lr)
{
  return tree[(2*x + lr)];
}

int lvl_count(int x)
{
    int level=1, ch=1;
    while(ch<x)
    {
     ch*=2;
     level++;
    }
    return level;
}

void iniz_l(int s)
{
    tree[s] = make_pair(0, (int)(str[0] == 'a'));
    for (int i = s+1; i < s+str.size(); ++i)
    {
        //cout << str[i-s] << " " << str[i-s-1] << " " << str[i-s+1] << "\n"; system("PAUSE");
        tree[i] = make_pair((int)(str[i-s-1] == 'a')*(int)(str[i-s] == 'a'), (int)(str[i-s] == 'a'));
    }
}

void iniz_t()
{
  for (int i = (ln+1)/2-1; i >=1; i--)
  {
      pair <int ,int> p1, p2;
      p1 = potom(i,0);
      p2 = potom(i,1);
      tree[i] = make_pair(p1.second+p2.first,p1.second+p2.first);
  }
}

void make_btree(int a)
{
  lvl = lvl_count(a);
  ln = (1<<(lvl))-1;
  iniz_l((ln+1)/2);
  iniz_t();
}

/*void find_ans(int v, int left, int right)
{
    if (tree[v] == 1 && !fl) {vec.push_back(v); return;}
    else
    {
        if (potom(v,0))
    }
*/

pair <int ,int> Search(int v, int vL, int vR, int sL, int sR)
{
    //cout << v << " " <<vL << " " <<vR << " " <<sL << " " <<sR << "\n";
    if( (vL != sL) || (vR != sR) )
    {
        int pot = (v << 1);
        int M = ((vL + vR) >> 1);
        if(sR <= M)return Search(pot, vL, M, sL, sR);
        else if(M < sL)return Search(pot + 1, M + 1, vR, sL, sR);
        else return max(Search(pot, vL, M, sL, M), Search(pot + 1, M + 1, vR, M + 1, sR));
    }
    return tree[v];
}

void in()
{
    ifstream cin("a.in");
    cin >> str;
    make_btree(str.size());
   // cout << length << "\n";
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int L, R;
        cin >> L >> R;
        pair <int ,int> p = Search(1, 0, (ln+1)/2-1, L-1,R-1);
        ans.push_back(p.first);
    }
}

void solution()
{

}

void out()
{
    ofstream cout("a.out");
    int ch = 1;
    for (int i = 1; i <= ln; i++)
    {
        if (i%ch==0) {cout << "\n"; ch*=2;}
        cout << "<"<< tree[i].first  << "," << tree[i].second  << ">, ";
    }
    /*for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";*/
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
