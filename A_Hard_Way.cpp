// https://codeforces.com/contest/1642/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  vector<pair<int,int>>v;
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    v.push_back({y,x});
  }
  sort(v.begin(),v.end());
  int ans = 0;
  if (v[1].first == v[2].first) ans=v[2].second-v[1].second;
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
