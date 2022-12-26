// https://codeforces.com\problemset\problem\1355\B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<ll>v(n);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int ans = 0, cur = 0;
  for (int i = 0; i < n; i++) {
    if (++cur == v[i]) {
      ans++;
      cur = 0;
    }
  }
  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
