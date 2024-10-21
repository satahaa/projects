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
#define MOD 1000000007
#define YES cout << "YES"
#define NO cout << "NO"
#define pb push_back
constexpr int di[] = {-1, 1, 0, 0};
constexpr int dj[] = {0, 0, -1, 1};

void sol(int tc) {
    i32 n, t;
    cin >> n >> t; 

    vector<i32> cooking(n);
    for (i32 i = 0; i < n; ++i) cin >> cooking[i]; 
  
    sorted(cooking);

    i32 count = 0;
    i32 total = 0;

    for (i32 i = 0; i < n; ++i) {
        if (total + cooking[i] <= t) {
            total += cooking[i];
            count++;
        } 
        else break;  
    }

    cout << count; 
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++) {
        sol(i);
        cout << '\n';
    }
    return 0;
}