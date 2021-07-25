//ял "нкхлохюдмюъ ренпхъ"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N_MAX = 20+5;

int n;
long long k;

long long kat[N_MAX*2+1][N_MAX];

string ans;

void in()
{
    cin >> n >> k;
}

void solution()
{
    k++;
    int bal = 0;
    kat[2*n][0] = 1;
    for (int i = 2*n-1; i >= 0; i--)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j == 0) {kat[i][j] = kat[i+1][j+1]; continue;}
            if (j == n) {kat[i][j] = kat[i+1][j-1]; continue;}
            kat[i][j] = kat[i+1][j+1] + kat[i+1][j-1];
        }
    }
    for (int i = 0; i < 2*n; i++)
    {
        if (k <= kat[i + 1][bal + 1])
        {
            ans += '(';
            bal++;
        }
        else
        {
            k -= kat[i + 1][bal + 1];
            ans += ')';
            bal--;
        }
    }
}

void out()
{
       /* for (int i = 0; i < 2*n; i++)
    {
        for (int j = 0; j <= n; j++) cout << kat[i][j] << " ";
        cout << "\n";
    }*/
    cout << ans << "\n";
}

int main()
{
    in();
    solution();
    out();
    return 0;
}
