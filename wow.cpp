#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<ll>
#define pii pair<ll, ll>
#define mii map<ll, ll>
#define umii unordered_map<ll, ll>
#define si set<ll>
#define usi unordered_set<ll>
#define ls(i, s, n) for (int i = s; i <= n; i++)
#define rl(i, s, n) for (int i = s; i >= n; i--)
#define l(i, n) for (int i = 0; i < n; i++)
#define inpv(v) for (auto &val : v) cin >> val
#define outm(m) for (auto &[fst, snd] : m)
#define outv(v) for (auto &val : v) cout << val << ' '
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define Case cout << "Case " << tc << ": ";
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define spc ' '
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define nl '\n'
#define MOD 1000000007

void sol(int tc) {
    int n;
    cin >> n;
    vi a(n);
    umii mp;
    l (i, n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int m = n - 2;
    int sq = sqrt(m);
    if (sq * sq == (m) && mp[sq] >= 2) {
        cout << sq << spc << sq << nl;
        return;
    }
    ls (i, 1, sqrt(m)) {
        if ((m % i) == 0) {
            if (mp[i] > 0 && mp[m / i] > 0) {
                cout << i << spc << m / i << nl;
                return;
            }
        }
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
    }
    return 0;
}