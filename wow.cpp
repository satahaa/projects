#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define l(i, n) for (int i = 0; i < n; i++)
#define sorted(a) sort(a.begin(), a.end())
#define rsorted(a) sort(a.rbegin(), a.rend())
#define reversed(a) reverse(a.begin(), a.end())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define MOD 1000000007
#define YES cout << "YES\n"
#define NO cout << "NO\n" 
#define spc ' '
#define pb push_back
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};
bool is_rational(double x) {
    x = std::abs(x);
    for (int i = 0; i < 20; ++i) {
        const auto a = std::floor(x);
        if (x - a < 1e-8)
            return true;
        x = 1 / (x - a);
    }
    return false;
}
void sol(int tc) {
    char a, b;
    cin >> a >> b;

    double k = abs(a - b);
    map<int, int> mp;

    if (k > 0) {
        for (int i = 1; i <= (int)k; i++) {
            double val = 94.0 / i;
            if (is_rational(val)) {
                mp[i] = static_cast<int>(ceil(val));
            }
        }

        for (auto [i, j] : mp) {
            if (static_cast<int>(a) % i == static_cast<int>(b) % i)
                cout << i << ' ' << j << '\n';
        }
    }
    cout << '\n';
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