#include <bits/stdc++.h>
using namespace std;
typedef long long int i32;
#define endl '\n'
#define l(i, n) for (int i = 0; i < n; i++)
#define sortall(a) sort(a.begin(), a.end())
#define revall(a) reverse(a.begin(), a.end())
#define MOD 1e9 + 7
#define Yes cout << "Yes" << endl;
#define YES cout << "YES" << endl;
#define No cout << "No" << endl;
#define NO cout << "NO" << endl;
#define pb push_back

void sol(int t)
{    
    int n; cin >> n;
    string s; cin >> s;
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    int cost = 0;
    
    // Separate counts for lowercase and uppercase
    unordered_map<char, int> lower_counts;
    unordered_map<char, int> upper_counts;

    for (char c = 'a'; c <= 'z'; ++c) {
        lower_counts[c] = freq[c];
        upper_counts[toupper(c)] = freq[toupper(c)];
    }

    // Calculate the minimal cost to make it palindrome
    for (char c = 'a'; c <= 'z'; ++c) {
        char lc = c;
        char uc = toupper(c);
        int pairs = min(lower_counts[lc], upper_counts[uc]);
        int remaining_lower = lower_counts[lc] - pairs;
        int remaining_upper = upper_counts[uc] - pairs;

        // Cost of converting remaining_lower and remaining_upper to pairs
        cost += (remaining_lower + remaining_upper) * 2; // Change cost 2 per change
    }

    cout << cost << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) 
        sol(i);
    return 0;
}