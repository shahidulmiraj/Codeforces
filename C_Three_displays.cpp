// https://codeforces.com\problemset\problem\987\C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n),p(n);

  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  
  for(int i = 0; i < n; i++){
    cin >> p[i];
  }
  
  ll ans=INT_MAX;
  for (ll i = 0; i < n; i++) {
    ll l=INT_MAX,r=INT_MAX;
    for (int j = 0; j < i; j++) {
      if(v[j] < v[i]) {
        l = min(l, p[j]);
      }
    }
    for (int k = i+1; k < n; k++) {
      if(v[i] < v[k]) {
        r = min(r, p[k]);
      }
    }
    if(l != INT_MAX and r != INT_MAX) {
      ans = min(ans, l+r+p[i]);
    }
  }
  if(ans == INT_MAX) ans = -1;
  cout << ans << endl;
}

int main()
{
  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);

  solve();
}
