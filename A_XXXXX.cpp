// https://codeforces.com\problemset\problem\1364\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  ll sum = accumulate(v.begin(),v.end(),0LL);
  ll ans = 0, p = sum, ans2=0;
  for(int i = 0; i < n; i++) {
    if(p % m) {
      ans = n-i;
      break;
    }
    p -= v[i];
  }
  p = sum;
  for(int i = n-1; i >= 0; i--) {
    if(p % m) {
      ans2 = i+1;
      break;
    }
    p -= v[i];
  }
  ans = max(ans,ans2);
  if(ans == 0) cout << -1 << '\n';
  else cout << ans << '\n';
  
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
