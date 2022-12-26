// https://codeforces.com/contest/1763/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ans = v[0], ans1 = v[0];
  for(int i = 1; i < n; i++) {
    ans = (ans|v[i]);
  }
  for(int i = 1; i < n; i++) {
    ans1 = (ans1&v[i]);
  }
  
  cout << ans-ans1 << '\n';

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
