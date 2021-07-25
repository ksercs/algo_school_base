#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, S;

bool inside(int MIN, int val, int MAX)
{
    return MIN <= val && val <= MAX;
}

struct rect
{
    int x1,y1;
    int x2,y2;

    rect(){}
    rect(int X1, int Y1, int X2, int Y2): x1(X1), y1(Y1), x2(X2), y2(Y2) {}

    void sort_koor()
    {
        if (x1 > x2) swap(x1,x2);
        if (y1 > y2) swap(y1,y2);
    }

    int square()
    {
        return (x2-x1)*(y2-y1);
    }

    bool is_exist(rect r)
    {
        return
            inside(x1, r.x1, x2) && inside(x1, r.x2, x2) &&
            inside(y1, r.y1, y2) && inside(y1, r.y2, y2);

    }
};

vector <rect> mas;
vector <int> X,Y;

void in()
{
    ifstream cin("task.in");
    cin>>n;
    mas.resize(n);
    for (int i=0; i<n; ++i)
    {
        cin >> mas[i].x1 >> mas[i].y1 >> mas[i].x2 >> mas[i].y2;
    }
}

void solution()
{
  for (int i=0; i<n; ++i)
  {
        mas[i].sort_koor();
        X.push_back(mas[i].x1);
        X.push_back(mas[i].x2);

        Y.push_back(mas[i].y1);
        Y.push_back(mas[i].y2);
   }
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    X.resize(unique(X.begin(), X.end()) - X.begin());
    Y.resize(unique(Y.begin(), Y.end()) - Y.begin());

    for (int i=0; i<X.size()-1; ++i)
    {
        for (int j=0; j<Y.size()-1; ++j)
        {
            rect cur = rect(X[i],Y[j],X[i+1],Y[j+1]);

            for (int k=0; k<mas.size(); ++k)
            {
                if (mas[k].is_exist(cur))
                {
                    S += cur.square();
                    break;
                }
            }
        }
    }
}

void out()
{
    ofstream cout ("task.out");
    cout << S << endl;
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
