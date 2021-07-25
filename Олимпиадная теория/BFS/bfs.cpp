#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

const int closed = 9;

int n, m, x, y, ch=1, t, i1, i2;
int matrix[100][100];
int dx[6] = {0,  0, 1, -1}, 
    dy[6] = {1, -1, 0,  0};

typedef pair <int, int> pa;
queue < pair <pa, int> > q;
pair <pa, int> pi;
pair <pa, int> zhelp;

void bfs()
{
     
     while (!(q.empty()))
     {
           i1 =(q.front()).first.first; i2 =(q.front()).first.second;
           ch=(q.front()).second;
           for(int i=0; i<4; i++)
           {
                   t= matrix[i1+dx[i]][i2+dy[i]];
                   if (t==0) {
                              matrix[i1+dx[i]][i2+dy[i]] = ch+1; 
                              pi.second = ch+1;
                              pi.first.first = i1+dx[i];
                              pi.first.second = i2+dy[i];
                              q.push(pi);
                              }
           }
           q.pop();
     }
}

void in()
{
    ifstream cin ("bfs.in");
    cin >>n >>m;
    for (int i=0; i<closed; i++)
    {
          cin >>x >>y;
          matrix[x][y] = -1;
    }
}

void solution()
{
    for (int i=0; i<n+2; i++)
    {
      matrix[0][i] = -1; 
      matrix[n+1][i] = -1;
    }
    for (int i=0; i<m+2; i++)
    {
      matrix[i][0] = -1; 
      matrix[i][m+1] = -1;
    }
    pi.first.first = 1;
    pi.first.second = 1;
    pi.second = 1; 
    q.push(pi);
    matrix[1][1] = q.front().second;
    bfs();
}

void out()
{
     ofstream cout ("bfs.out");
     for (int i=0; i<=5+1; i++)
    {
            for (int j=0; j<=6+1; j++)
            {
             cout <<matrix[i][j] <<" ";
            }
            cout <<"\n";
    }
    
   /* while (!(q.empty()))
    {
        cout << q.front() << " ";
        q.pop();  
    }*/   

}

int main()
{
    in();
    solution();
    out();
return 0;
}
