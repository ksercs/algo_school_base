#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int n, length;

int mass[10], tree[100000];

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

int make_btree(int n)
{
  int lvl = lvl_count(n);
  int cn = (1<<(lvl))-1;
  length = cn;
  return cn;
}

/*int find_pred(int x)
{
  return (x/2);
}

int find_potom(int x, int lr)
{
  return (2*x + lr);
}*/

void in()
{
    ifstream cin ("sum_tree.in"); 
    cin >>n;
    for (int i=0; i<n; i++)
    {
     cin >> mass[i];   
    }    
}

void solution()
{
         make_btree(n);
         for  (int i=0; i<n; i++)
         {
             tree[length-1-i] = mass[n-i-1];
         }
}

void out()
{
     ofstream cout ("sum_tree.out");   
    /* cout <<n<<"\n";
     for (int i=0; i<n;i++)
     {
         cout <<mass[i] <<" ";
     }*/
    // cout <<tree[length-1];
}

int main()
{
in();
solution();
out();
return 0;
}
