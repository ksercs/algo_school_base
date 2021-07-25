#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <vector>
//#include <conio.h>


using namespace std;

const int MAX_LVL = 18;

int n, k, length, lvl_c,  f_leave, ind_elem, znext, st;

vector <int> vec;

struct b_tree_T
{
    int tree[1<<MAX_LVL];
    int pred(int x)
    {
      return (x/2);
    }

    int potom(int x, int lr)
    {
      return (2*x + lr);
    }

    int lvl_count(int x)
    {
        int level=1, ch=1;
        while(ch<x)
        {
         ch*=2;
         level++;
        }
       lvl_c=level;
       f_leave=ch;

    return level;
    }

    void make_btree(int a)
    {
      int lvl = lvl_count(a);
      int cn = (1<<(lvl))-1;
      length = cn;
    }

    void L_iniz()
    {
          for (int i=f_leave; i<f_leave+n; i++)
         {
             tree[i]=1;
         }
    }


    void sum(int len)
    {
         for (int i=len-f_leave; i>=1; i--)
         {
             tree[i]= tree[potom(i, 0)] + tree[potom(i, 1)];
         }
    }

    void t_update(int ind)
    {
         for (int i=ind/2; i>=1; i/=2)
         {
         tree[i]=tree[potom(i, 0)] + tree[potom(i, 1)];
         }
    }

    int k_find(int ind_f_leave, int element)
    {
         int ind=1;
         while (ind<ind_f_leave)
         {
             if (tree[potom(ind,0)]>=element) {ind=potom(ind,0);}
             else  {element-=tree[potom(ind,0)]; ind=potom(ind,1);}
         }
        return ind;
    }
} BT;

void in()
{
    ifstream cin ("sum_tree.in");
    cin >>n >>k;
}

void solution()
{
 BT.make_btree(n);
 BT.L_iniz();
 BT.sum(length);
 st=-1;
 for (int i=n; i>0; i--)
 {
      znext=(st+k)%i;
      ind_elem = BT.k_find(f_leave, znext+1);
      st=znext-1;
      BT.tree[ind_elem]=0;
      vec.push_back(ind_elem-f_leave+1);
      BT.t_update(ind_elem);
 }
}

void out()
{
    ofstream cout ("sum_tree.out");
    for (int i=0; i<vec.size(); i++)
    {
        cout <<vec[i] <<" ";
    }
    cout  <<"\n"; //system("PAUSE");
}

int main()
{
in();
solution();
out();
return 0;
}

