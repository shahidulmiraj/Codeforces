// https://codeforces.com/contest/219/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  string s,ans="";
  cin >> n >> s;
  map<char,ll>mp;
  for(auto &it : s) {
    mp[it]++;
  }
  
  for(auto &it:mp){
    if(it.second % n != 0){
      cout << -1 << '\n';
      return;
    }
    ll p = it.second/n;
    while(p--){
      ans += it.first;
    }
  }

  while (n--) {
    cout << ans ;
  }
  cout << '\n';
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
