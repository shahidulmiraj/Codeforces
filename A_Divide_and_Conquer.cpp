// https://codeforces.com/contest/1762/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<ll>v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  ll sum=accumulate(v.begin(),v.end(),0LL);
  if(sum % 2 == 0){
    cout << 0 << endl;
    return;
  }
  ll ans=INT_MAX;
  for(auto it:v){
    ll x=it;
    ll cnt=0;
    if(x&1){
      while(x%2){
        cnt++;
        x/=2;
      }
    }
    else{
      while(x%2==0){
        cnt++;
        x/=2;
      }
    }
    ans = min(ans,cnt);
  }
  cout << ans << endl;
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
