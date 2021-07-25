#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double n, m, p;
double ans;

double get_x1(int y)
{
    //cout << "x1 " << n*y/m + 1 << "\n";
    return n*y/m + 1;
}

double get_x2(int y)
{
    //cout << "x2 " << (n-p)/m*y+p << "\n";
    return (n-p)/m*y+p;
}

void in()
{
    cin >> n >> m >> p;
}

void solution()
{
    for (int i = 1; i < m; i++)
    {
        double k1 = ceil(get_x1(i));
        double k2 = floor(get_x2(i));
        if (k1 == get_x1(i)) ans--;
        ans += k2-k1+1;
    }
}

void out()
{
    cout << ans << "\n"; //system("PAUSE");
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
