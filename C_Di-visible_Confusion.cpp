// https://codeforces.com\problemset\problem\1604\C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{
  ll g=__gcd(a, b);
  return (a*b)/g;
}

void solve()
{
  ll n; 
  cin >> n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i];
  }

  ll temp=1;

  for(ll i = 0; i < n; i++) {
    temp = lcm(temp, i + 2);
    if(v[i] % temp == 0){
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
  
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  ll t;
  cin >> t;
  while(t--){
    solve();
  }
}
