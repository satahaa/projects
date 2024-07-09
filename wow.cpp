#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define endl '\n'
#define l(i, n) for (int i = 0; i < n; i++)
#define sorted(a) sort(a.begin(), a.end())
#define reversed(a) reverse(a.begin(), a.end())
#define all(x) x.begin(), x.end()
#define MOD 1e9 + 7
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pb push_back
const int di[] = {-1, 1, 0, 0};
const int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    int n; cin >> n;
    vector<int> a(n);
    int sum  = 0;
    bool e = false, o = false;    
    l (i, n) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 0) e = true;
        else o = true;
    }
    if ((sum % 2 != 0) or (o and e))
        YES;
    else NO;

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