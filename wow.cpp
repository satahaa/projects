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
    int a, b, c;
    cin >> a >> b >> c;

    int sticks[3] = {a, b, c};
    sort(sticks, sticks + 3);

    if (sticks[0] == sticks[1] && sticks[2] % 2 == 0)
        YES;
    else if (sticks[1] == sticks[2] && sticks[0] % 2 == 0)
        YES;
    else if (sticks[0] + sticks[1] == sticks[2])
        YES;
    else
        NO;

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