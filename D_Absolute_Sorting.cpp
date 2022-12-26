// https://codeforces.com\contest\1772\problem\D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n),v1;
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  if(is_sorted(v.begin(),v.end())){
    cout << 0 << '\n';
    return;
  }
  v1=v;
  reverse(v1.begin(),v1.end());
  if(is_sorted(v1.begin(),v1.end())){
    cout << v1[n-1] << '\n';
    return;
  }

  ll p=*max_element(v.begin(),v.end());
  ll q=*min_element(v.begin(),v.end());

  int r=ceil((p+q)/2.0);

  for(int i = 0; i < n; i++) {
    v[i] = abs(v[i]-r);
  }

  if(is_sorted(v.begin(),v.end())){
    cout << r << '\n';
    return;
  }
  cout << -1 << '\n';
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
