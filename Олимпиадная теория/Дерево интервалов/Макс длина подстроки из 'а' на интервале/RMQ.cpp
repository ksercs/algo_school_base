#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string str;
int q, ln, lvl, fl;

int tree[262143+2];

vector <int> ans;

int pred(int x)
{
  return tree[(x/2)];
}

int potom(int x, int lr)
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
    for (int i = s; i <= s+str.size()-1; ++i)
    {
        int count = 0, g = i-s;
        while(str[g] == 'a')
        {
            count++;
            g++;
        }
        tree[i] = count;
    }
}

void iniz_t()
{
  for (int i = (ln+1)/2-1; i >=1; i--)
  {
      tree[i] = max(potom(i,0), potom(i,1));
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

int Search(int v, int vL, int vR, int sL, int sR)
{
    cout << v << " " <<vL << " " <<vR << " " <<sL << " " <<sR << "\n";
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
        ans.push_back(Search(1, 0, (ln+1)/2-1, L-1,R-1));
    }
}

void solution()
{

}

void out()
{
    ofstream cout("a.out");
    /*for (int i = 1; i <= ln; i++)
    {
        cout << tree[i] << " ";
    }*/
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
