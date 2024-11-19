#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<ll>
#define pii pair<ll, ll>
#define mii map<ll, ll>
#define umii unordered_map<ll, ll>
#define si set<ll>
#define usi unordered_set<ll>
#define ls(i, s, n) for (int i = s; i <= n; i++)
#define rl(i, s, n) for (int i = s; i >= n; i--)
#define l(i, n) for (int i = 0; i < n; i++)
#define inpv(v) for (auto &val : v) cin >> val
#define outm(m) for (auto &[fst, snd] : m)
#define outv(v) for (auto &val : v) cout << val << ' '
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define Case cout << "Case " << tc << ": ";
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define spc ' '
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define nl '\n'
#define MOD 1000000007

void sol(int tc) {
    int n; // Number of integers in the current test case
        cin >> n;
        
        map<int, int> freq; // Map to store the frequency of each number
        vector<int> values; // Unique values with frequency >= 2
        
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }
        
        // Collect numbers that appear at least twice
        for (const auto& [key, count] : freq) {
            if (count >= 2) {
                values.push_back(key);
            }
        }
        
        if (values.size() < 2) {
            // Not enough unique coordinates to form a rectangle
            cout << "NO\n";
            return;
        }
        
        // Sort values to maximize area
        sort(values.begin(), values.end());
        
        double max_ratio = 1e9; // To minimize the ratio for an optimal rectangle
        int x1 = 0, x2 = 0; // To store the optimal coordinates

        // Find the best pair of values that minimizes the ratio of length to width
        for (size_t i = 1; i < values.size(); ++i) {
            int l1 = values[i - 1];
            int l2 = values[i];
            double ratio = (2.0 * (l2 + l1)) / (l2 - l1);
            
            if (ratio < max_ratio) {
                max_ratio = ratio;
                x1 = l1;
                x2 = l2;
            }
        }
        
        // Output the rectangle with maximum area
        cout << "YES\n";
        cout << x1 << " " << x1 << " " << x2 << " " << x2 << " "
             << x1 << " " << x2 << " " << x2 << " " << x1 << "\n";
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