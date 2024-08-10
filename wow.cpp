#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define endl '\n'
#define l(i, n) for (int i = 0; i < n; i++)
#define sorted(a) sort(a.begin(), a.end())
#define rsorted(a) sort(a.rbegin(), a.rend())
#define reversed(a) reverse(a.begin(), a.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(). x.rend()
#define MOD 1e9 + 7
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
const int di[] = {-1, 1, 0, 0};
const int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n; cin >> n;
    unordered_map<char, int> mp{
        {'A' , 0},
        {'B', 0},
        {'C', 0},
        {'D', 0}
    };
    string s; cin >> s;
    for (char c : s) if (c != '?') mp[c]++;
    int ans = 0;
    for (auto& p : mp) {
        if (p.second > n)
            ans += n;
        else ans += p.second;
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
        sol(i);
    return 0;
}