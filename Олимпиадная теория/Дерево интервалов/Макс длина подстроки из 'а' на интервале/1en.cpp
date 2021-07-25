#include<iostream>
#include<utility>
#include<algorithm>
#include<string>
#include<fstream>

using namespace std;

//constant
const char n_MIN = 1;
const int n_MAX = 1e5;
const char m_MIN = 1;
const int m_MAX = 1e3;

//global
int n;
int m;
string str;
int L[m_MAX], R[m_MAX];
int answer[m_MAX];

//interval_tree
int tree[(1 << 17) * 2];

int Search(int v, int vL, int vR, int sL, int sR)
{
    //cout << v << "\n";
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
    ifstream cin("input.txt");
    char s;
    cin >> str >> m;
    for(int c = 0; c < m; c++)
        cin >> L[c] >> R[c];
}

void solution()
{
    n = str.size();
    int h;
    for(h = 1; h < n; h <<= 1);
    int* ind = new int;
    for(int c =  0; c < n; c++)
    {
        if(str[c] == '1')ind = &tree[c + h];
        (*ind)++;
    }
    for(int c = h - 1; c > 0; c--)
    {
    	int pot = (c << 1);
    	tree[c] = max(tree[pot], tree[pot + 1]);
    }
    /*
    for(int c = 0; c < h << 1; c++)
    {
    	cout << c << ". " << tree[c] << "\n";
    }
    */
    for(int c = 0; c < m; c++)
    {
        answer[c] = Search(1, 0, h - 1, L[c], R[c]);
    }
}

void out()
{
    ofstream cout("output.txt");
    for(int c = 0; c< m; c++)
    {
        if(answer[c])
        {
            cout << 1;
            for(int v = 1; v < answer[c]; v++)cout << 0;
            cout << "\n";
        }
        else cout << "0\n";
    }
}

int main()
{
    in();
    solution();
    out();
    return 0;
}

