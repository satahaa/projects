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
#define YES cout << "YES"
#define NO cout << "NO"
#define pb push_back
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n; cin >> n;
    vector<int> a(n);
    int sm = 0;
    l (i, n) {cin >> a[i]; sm += a[i];}

    if (sm % 3 == 0) {cout << 0; return;}
    l (i, n) {
        int k = sm - a[i];
        if (k % 3 == 0) {cout << 1; return;}
    }
    int m = 0;
    while (sm % 3 != 0) {
        sm++;
        m++;
    }
    cout << m;

    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++)
        {sol(i); cout << endl;}
    return 0;
}