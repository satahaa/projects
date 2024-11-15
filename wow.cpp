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
    vector<int> a(n);
    l(i, n) cin >> a[i];

    bool p = true;

    l (i, n - 1) {
        bool swapped = false;
        l (j, n - i - 1) {
            if (abs(a[j] - a[j + 1]) != 1 && a[j] > a[j + 1]) {
                p = false;
                break;
            }
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        if (!p) break;  
    }

    p ? YES : NO;
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