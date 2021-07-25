#include <iostream>
#include <fstream>

using namespace std;

const int MAXN = 6;

int n;
char u[MAXN];

bool getBit(int ind, int bt)
{
    return (u[ind] & (1<<bt) );
}

void putBit(int ind, int bt)
{
    u[ind] = (u[ind] | (1<<bt));
}

void in()
{
    ifstream cin("C.in");
    cin >> n;
}

void solution()
{
    putBit(n/8, n%8);
}

void out()
{
    ofstream cout("C.out");
    for (int i = 0; i < MAXN; ++i)
        for (int b = 0; b < 8; ++b)
            cout << i*8+b << " : "<< getBit(i, b) << "\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
