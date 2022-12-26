// https://codeforces.com\problemset\problem\1285\C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm (ll a, ll b) {
  ll g = __gcd(a, b);
  return (a * b) / g;
}

void solve()
{
  ll n;
  cin >> n;
  for(ll i = sqrt(n); i >= 1; i--) {
    if(n % i == 0){
      ll p = lcm (i, n/i);
      if(p == n){
        cout << i << ' ' << n/i << '\n';
        return;
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
