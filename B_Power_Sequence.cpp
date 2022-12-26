#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector <ll> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());

  ll ans = LONG_LONG_MAX;
  for (ll i = 1; pow(i, n - 1) < n * 3e9; ++i) {
    ll cost = 0, a = 1;
    for (ll j = 0; j < n; ++j) {
      cost += abs(a - v[j]);
      a *= i;
    }
    ans = min(ans, cost);
  }
  cout << ans << '\n';
  
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
