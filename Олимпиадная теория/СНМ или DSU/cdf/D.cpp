#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <string.h>

#define SZ size()
#define VEC vector
#define PB push_back
#define MP make_pair
#define SS second
#define FF first
#define PII pair <int,int>
#define LL long long

using namespace std;

const int MAXN = 1000 + 15;

int n;
int parent[MAXN], size[MAXN];
VEC < PII > cl, b;

int find_set (int x)
{
    if (parent[x] == x) return x;
    return parent[x] = find_set(parent[x]);
}

void union_set(int a, int b)
{
        int pa = find_set(a), pb = find_set(b);
        if (size[pa] < size[pb]) swap(pa, pb);
        parent[pb] = pa;
        size[pb] += pa;
}

int main()
{
    //ifstream cin("input.txt");
    //ofstream cout("output.txt");
    cin >> n;
    for (int i = 1; i <= n; ++i){
        parent[i] = i;
        size[i] = 1;
    }
    for (int i = 1; i <= n-1; ++i){
        int a, b;
        cin >> a >> b;
        int pa = find_set(a), pb = find_set(b);
        if ( pa == pb ) cl.PB(MP(a,b));
        else{
            if (size[pa] < size[pb]) swap(pa, pb);
            parent[pb] = pa;
            size[pb] += pa;
        }
    }
    set <int> st;
    for (int i = 1; i <= n; ++i){
        int pr = find_set(i);
        int s = st.SZ;
        st.insert(pr);
        if (st.SZ > s && st.SZ > 1){
            union_set(1, i);
            b.PB(MP(1, i));
        }
    }
    cout << cl.SZ << "\n";
    for (int i = 0; i < cl.SZ; ++i)
        cout << cl[i].FF << " " << cl[i].SS << " " << b[i].FF << " " << b[i].SS << "\n";
    return 0;
}
