// https://codeforces.com/contest/1767/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin()+1,v.end());
  int ans = v[0];
  for(int i = 1; i < n; i++) {
    if(v[i] > ans){
      ans += ((v[i]-ans+1)/2);
    }
  }
  cout << ans << '\n';
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
