#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define In                     \
    for (ll i = 0; i < n; i++) \
    cin >>
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    ll a[4], n = 4, sum = 0;
    In a[i];
    string s;
    cin >> s;
    for (ll i = 0; i < s.length(); i++)
    {
        sum += a[s[i] - 49];
    }
    cout << sum;
}

int main()
{
    fast
    solve();
}