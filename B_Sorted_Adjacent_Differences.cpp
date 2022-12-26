#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(),a.end());
  vector<ll> v;
  for(int i = 0; i <= (n-1)/2; i++) {
      ll x = a[i];
      ll y = a[n-1-i];
      v.push_back(x);
      if(i != n-1-i) v.push_back(y);
  }
  reverse(v.begin(),v.end());
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
      
  cout << endl;
  
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
