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

int calc(int top, int bottom)
{
    int sum = 0;
    if (top > bottom)
        for (int i = bottom; i <= top; i++)
            if (i % 2 == 0)
                sum += i;
    return sum;
}
void sol(int t)
{   
    cout << t + 1<< endl;     
    return;
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