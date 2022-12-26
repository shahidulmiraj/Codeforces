// https://codeforces.com\contest\1216\problem\D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n),v1(n);

  for (ll i = 0; i < n; i++){
    cin >> v[i];
  }
  v1=v;

  sort(v.begin(),v.end());

  for(ll i=0; i<n; i++){
    v1[i]=v[n-1]-v[i];
  }

  ll ans = v1[0];

  for(ll i = 1; i < n; i++) {
    ans = __gcd(ans, v1[i]);
  }
  ll sum = 0;
  if(ans == 1) {
    if(n == 2) {
      cout << 1 << ' ' << v[1]-v[0] << '\n';
      return;
    }
    for (ll i = 0; i < n; i++) {
      sum += ((v[n-1]-v[i]));
    }
  }
  else{
    for (ll i = 0; i < n; i++) {
      sum += ((v[n-1]-v[i])/ans);
    }
  }
  cout << sum << ' ' << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
