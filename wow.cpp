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
    string s, t;
    cin >> s >> t;
    map<char, int> mp;
    for (const char &c : s) mp[c]++;
    sorted(s);

    if (t != "abc" || mp['a'] == 0 || mp['b'] == 0 || mp['c'] == 0) {
        cout << s;
        return;
    }

    string ans = "";
    l (i, mp['a']) ans += 'a';
    l (i, mp['c']) ans += 'c';
    l (i, mp['b']) ans += 'b';
    for (const auto& p : mp) {
        if (p.first > 'c')
            l (i, p.second) ans += p.first;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
        cout << '\n';
    }
    return 0;
}
