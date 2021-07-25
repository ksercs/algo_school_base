#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>

using namespace std;

const int INF = 1000000000, MAX_SIZE = 100000+5;

int n, m, st, fn;

int w[MAX_SIZE], used[MAX_SIZE];

typedef pair <int, int> pa;

set <pa> way;
set <pa>:: iterator iter, it;

map <int,vector <pa> > ed;

void dijkstra(int v)
{
    //cout << v << "\n"; system("PAUSE");
    used[v] = 1;

    /*for (it = way.begin(); it != way.end(); it++)
    {
        cout <<"<" << (*it).first <<"," <<(*it).second << ">, ";
    }
    cout << endl;*/
    way.erase(way.begin());
    for (int i = 0; i < ed[v].size(); i++)
    {
        pa to = ed[v][i];
        int tmp = w[v]+to.first;
        if (used[to.second]==0)
        {
            //used[to.second]==1;
            if (w[to.second] > tmp)
            {
                way.erase(make_pair(w[to.second], to.second));
                way.insert(make_pair(tmp, to.second));
                w[to.second] = tmp;
            }
        }
    }
    /*for (it = way.begin(); it != way.end(); it++)
    {
        cout <<"<" << (*it).first <<"," <<(*it).second << ">, ";
    }
    cout << endl;*/
    if (way.size() > 0){iter = way.begin();dijkstra((*iter).second);}
   // cout << (*iter).first << " " << (*iter).second <<  "\n";
    /*for (iter = way.begin(); iter != way.end(); iter++)
    {
        if (used[(*iter).second]==0) {dijkstra((*iter).second);break;}
    }*/
    /*if (used[(*iter).second]==0)*/ //dijkstra((*iter).second);
    /*if (used[(*iter).second]==0) {dijkstra((*iter).second);}
    else                        {iter++;dijkstra((*iter).second);}*/
}

void in()
{
    //ifstream cin ("dijkstra.in");
    cin >> n;// >> m;
    /*for (int i =0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        ed[a].push_back(make_pair(b, c));
        ed[b].push_back(make_pair(a, c));
    }*/
    cin >>st >> fn;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >>a;
            if (a != -1 && i != j) ed[i].push_back(make_pair(a, j));
        }
    }
}

void solution()
{
    for (int i = 1; i <= n; i++)
    {
        if (i == st) {way.insert(make_pair(0, i));}
        else         {way.insert(make_pair(INF, i));w[i]=INF;}
    }
   /* for (iter = way.begin(); iter != way.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }*/
    w[st] = 0;
    dijkstra(st);
}

void out()
{
     //ofstream cout ("dijkstra.out");
     if (w[fn] == INF) cout << "-1\n";
     else       cout << w[fn] << "\n";
}

int main()
{
    in();
    solution();
    out();
return 0;
}
