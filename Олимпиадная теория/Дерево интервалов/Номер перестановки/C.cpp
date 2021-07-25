#include <iostream>
#include <fstream>

using namespace std;

const int N = 100005;
const long long MOD = 1000000007;

struct Fenwick {
     int n;
     int a[N];

     void upd(int i, int x) {
          for (; i <= n; i += i & (-i))
              a[i] += x;
     }

     int get(int i) {
         int res = 0;
         for (; i > 0; i -= i & (-i))
             res += a[i];
         return res;
     }
};

long long fact[N];

void precalc() {
     fact[0] = 1;
     for (int i = 1; i < N; ++i)
         fact[i] = (fact[i - 1] * i) % MOD;
}

Fenwick f;

int main() {
    ifstream cin("sol.in");
    ofstream cout("sol.out");
    int n;
    long long res = 0;
    precalc();
    cin >> n;
    f.n = n;
    for (int i = 0; i <= n; ++i)
        f.a[i] = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        int cnt = n - i - 1;
        int x = f.get(a);
        res += fact[cnt] * (a - x - 1);
        res %= MOD;
        f.upd(a, +1);
    }
    cout << res + 1 << "\n";
    return 0;
}
