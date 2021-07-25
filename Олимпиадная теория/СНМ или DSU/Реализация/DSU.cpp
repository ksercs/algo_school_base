#include <iostream>
#include <fstream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

#define ff first
#define ss second

int V, E, ves, s, f;

typedef pair < int, pair < int, int > > PIP;
PIP mass[100];
vector <PIP> ans;
int pred[100], rank[100];

int find_set(int vertex)
{
    cout <<"FS:  " <<vertex <<" " <<pred[vertex] <<"\n"; system("PAUSE"); 
  if (vertex==pred[vertex]) {return vertex;}
  else
     {
	int res = find_set(pred[vertex]);
	pred[vertex]=res;
	cout <<"EXIT:  " <<vertex <<"\n"; system("PAUSE");
    return res;
     }
}

int set_union(int v1, int v2)
{
  v1 = find_set(v1);
  v2 = find_set(v2);
 // if (rank[v1]>rank[v2]) {swap(v1,v2);}	
  pred[v1]=v2;
 // if (rank[v1]==rank[v2]) {rank[v2]++;}
}

void kruskal ()
{
  for (int i=0; i<E; i++)
  {
	int a = find_set(mass[i].ss.ff);
	int b = find_set(mass[i].ss.ss);
//	cout <<a <<" " <<b <<"\n"; system("PAUSE");
	if (a!=b) 
	{
	set_union(a,b);
	ans.push_back(mass[i]);
	cout <<ans[0].ff <<":" <<ans[0].ss.ff <<" " <<ans[0].ss.ss <<"\n"; system("PAUSE");
	if (ans.size()==V-1) {break;}
	}
	
  }   
}

void in()
{
     ifstream cin("DSU.in");
     cin >>V >>E;
    for (int i=0; i<E; i++)
     {
         cin >> mass[i].ff >>mass[i].ss.ff >>mass[i].ss.ss;
     } 
}

void solution ()
{
     sort(mass, mass+E);   
     for (int i=1; i<=V; i++)
     {
         pred[i]=i;
     }
     kruskal();
}

void out()
{
   ofstream cout ("DSU.out");  
   //cout <<V <<" " <<E <<"\n";
   cout <<ans.size() <<"\n";
   for (int i=0; i<ans.size(); i++)
   {
       cout <<ans[i].ff <<" " <<ans[i].ss.ff <<" " <<ans[i].ss.ss <<"\n";
   }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
