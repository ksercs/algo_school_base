#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int n, k, num, x;
int used[10];

string str, raz;

vector <int> el;
vector <string> ans;

void out()
{
     ofstream cout ("a.out");
     cout << raz << "\n";
}

void dfs_R(int ind)
{
    if (ind == k)
    {
        num++;
       // cout << str << "\n";
        if (num == x) {raz = str; out();}
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (used[i] == 0)
            {
                used[i] = 1;
                str[ind] = i+'0';
                dfs_R(ind+1);
                used[i] = 0;
            }
        }
    }
}

void in()
{
    ifstream cin ("a.in");
    cin >> n >> k >> x;
}

void solution()
{
    for (int i = 1; i <= n; i++)
    {
        el.push_back(i);
    }
    for (int i = 1; i <= k; i++)
    {
        str+=" ";
    }
    dfs_R(0);
}

int main()
{
    in();
    solution();
    out();
return 0;
}
