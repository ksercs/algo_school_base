#include <iostream>
#include <fstream>

using namespace std;

const int MAX_LVL = 18;
const int N = 100005;
const long long MOD = 1000000007;

struct vertex
{
    int val;
    int Tagged;
    int Left;
    int Right;
};

vertex tree[1<<MAX_LVL-1];
int lvl, ln, n;

int potom(int x, int lr)
{
  return (2*x + lr);
}

int pred(int x)
{
  return (x/2);
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

void ln_count(int b)
{
  lvl = lvl_count(b);
  ln = (1<<(lvl))-1;
}

int Search(int v, int sL, int sR)
{
    //cout << v << " " <<sL << " " <<sR << "\n";
    if( (tree[v].Left != sL) || (tree[v].Right != sR) )
    {
        int l_pot = potom(v,0);
        int M = tree[l_pot].Right;
        if(sR <= M) return Search(l_pot, sL, sR);
        else if(M < sL)return Search(l_pot + 1, sL, sR);
        else return Search(l_pot, sL, M) + Search(l_pot + 1, M + 1, sR);
    }
    else{
        //cout << tree[v].val << "\n\n";
        return tree[v].val;
    }
}

void upd(int num)
{
    tree[num].val += 1;
    if (num != 1) upd(pred(num));
}

long long fact[N];

void precalc() {
     fact[0] = 1;
     for (int i = 1; i < N; ++i)
         fact[i] = (fact[i - 1] * i) % MOD;
}

void iniz_t()
{
  for (int i = ((ln+1)>>1)-1; i >=1; --i)
  {
      int l_p = potom(i,0), r_p = potom(i,1);
      tree[i].val = tree[l_p].val + tree[r_p].val;
      tree[i].Left = tree[l_p].Left;
      tree[i].Right = tree[r_p].Right;
  }
}

int main() {
    ifstream cin("sol.in");
    ofstream cout("sol.out");
    long long res = 0;
    precalc();
    cin >> n;
    ln_count(n);
    int l_count = (ln+1)>>1;
    for (int i = l_count; i <= ln; ++i)
    {
        tree[i].Left = tree[i].Right = i-l_count+1;
    }
    iniz_t();
   /* for (int i = 1; i <= ln; i++)
    {
        cout << tree[i].Left << " " << tree[i].Right << "\n";
    }*/
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        int cnt = n - i - 1;
        int x = Search(1, 1, a);
        //cout << x << "\n";
        res += fact[cnt] * (a - x - 1);
        res %= MOD;
        upd(l_count+a-1);
    }
    cout << res + 1 << "\n";
    return 0;
}
