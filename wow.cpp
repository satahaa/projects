#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define l(i, n) for (int i = 0; i < n; i++)
#define sorted(a) sort(a.begin(), a.end())
#define rsorted(a) sort(a.rbegin(), a.rend())
#define reversed(a) reverse(a.begin(), a.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MOD 1000000007
#define YES cout << "YES"
#define NO cout << "NO"
#define spc ' '
#define pb push_back
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int q; cin >> q;
    while (q--) {
        i32 n, m, o, p;
        cin >> n >> m >> o >> p;
        i32 ans = 0;

        vector<i32> powersOf2(m - n + 1);
        vector<i32> powersOf3(p - o + 1);

        powersOf2[0] = 1;  // 2^0
        for (int i = 1; i <= m - n; ++i) {
            powersOf2[i] = (powersOf2[i - 1] * 2) % MOD;
        }

        powersOf3[0] = 1;  // 3^0
        for (int j = 1; j <= p - o; ++j) {
            powersOf3[j] = (powersOf3[j - 1] * 3) % MOD;
        }

        l (i, m - n + 1) {
            l (j, p - o + 1) {
                ans = (ans + (powersOf2[i] * powersOf3[j]) % MOD) % MOD;
            }
        }
        cout << 2 * ans << spc;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
        cout << '\n';
    }
    return 0;
}