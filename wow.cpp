#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define endl '\n'
#define l(i, n) for (int i = 0; i < n; i++)
#define sortall(a) sort(a.begin(), a.end())
#define revall(a) reverse(a.begin(), a.end())
#define MOD 1e9 + 7
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define pb push_back
const int di[] = {-1, 1, 0, 0};
const int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n, k; cin >> n >> k;
    if (k == 1) {
        cout << n << endl;
        return;
    }

    cout << n + k - 1<< endl;
    return;
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