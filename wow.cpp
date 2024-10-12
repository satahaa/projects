#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define nl '\n'
#define spc ' '
#define l(i, n) for (int i = 0; i < n; i++)
#define sorted(a) sort(a.begin(), a.end())
#define rsorted(a) sort(a.rbegin(), a.rend())
#define reversed(a) reverse(a.begin(), a.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MOD 1e9 + 7
#define YES cout << "YES"
#define NO cout << "NO"
#define pb push_back
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int t = 0;
    int dr = 1, dc = 1;
    if (rb == rd or cb == cd) {
        cout << t;
        return;
    }
    while (true) {
        t++;
        rb += dr;
        cb += dc;
        if (rb == rd or cb == cd) {
            cout << t;
            return;
        }
        if (rb >= n or rb <= 1) dr *= -1; 
        if (cb >= m or cb <= 1) dc *= -1;
    }

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
        cout << '\n';
    }
    return 0;
}