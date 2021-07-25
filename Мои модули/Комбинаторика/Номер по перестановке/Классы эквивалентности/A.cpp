#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <set>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

const int MAX_COUNT = 3 + 5;

string str;

int n, ans;

int fac[] = {0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

void ekv(int k)
{
    int s = str[0];
    ans += ((s-'0'-1)*fac[n-1]);
    n--;
    str.erase(0, 1);
    for (int i = 0; i < n; i++)
    {
        if (str[i] > s) {str[i]--;}
    }
    if (n > 0) {ekv(n);};
}

void in()
{
    ifstream cin ("A.in");
    cin >> str;
}

void solution()
{
    n = str.size();
    ekv(n);
}

void out()
{
     ofstream cout ("A.out");
     cout << ans + 1 << "\n";
}

int main()
{
    in();
    solution();
    out();
return 0;
}
