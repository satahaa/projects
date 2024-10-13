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
    int n; 
    cin >> n;
    vector<string> bigrams(n - 2);
    for (int i = 0; i < n - 2; ++i) {
        cin >> bigrams[i];
    }

    string result = bigrams[0];
    for (int i = 1; i < n - 2; ++i) {
        if (bigrams[i][0] != result.back()) {
            result += bigrams[i];
        } else {
            result += bigrams[i][1];
        }
    }

    if (result.size() < n) {
        result += 'a'; // or 'b', since the answer exists
    }

    cout << result;
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
