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
    vector<int> arr(7);
    l (i, 7) cin >> arr[i];

    int a = arr[0];
    int b = arr[1];
    int k = arr[6] - arr[0];
    int c;
    for (int i = 2; i < 7; i++) 
        if (arr[i] == k - b) {
            c = arr[i];
            break;
        }
    cout << a << spc << b << spc << c;
    
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
