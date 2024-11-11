#include <bits/stdc++.h>
#include <ranges>
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
#define eb emplace_back
#define st first
#define nd second
#define nl '\n'
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n;
    cin >> n;
    vector<int> a(n), b(n - 1);
    l (i, n) cin >> a[i];
    l (i, n - 1) cin >> b[i];
    sorted(a); sorted(b);

    int l = 1, r = 1e9;
    int ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        vector<int> t = b;
        t.push_back(m);
        sorted(t);
        
        bool f = true;
        l (i, n)
            if (a[i] > t[i]) {
                f = false;
                break;
            }
        
        if (f) {
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << endl;


}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
    }
    return 0;
}