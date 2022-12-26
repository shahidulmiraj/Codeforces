// https://codeforces.com\contest\1765\problem\K

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl
#define tr ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) v.begin(), v.end()
#define space ' '
#define CIN(v)         \
    for (auto &it : v) \
        cin >> it;
#define COUT(v)              \
    for (auto &it : v)       \
        cout << it << space; \
    cout << nl;
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define pb push_back

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0, mn = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            sum += x;
            if (i + j == n - 1) mn = min(mn, x);
        }
    }
    cout << sum-mn << nl;
}

int main()
{
    tr;
    // tst
    solve();
}
