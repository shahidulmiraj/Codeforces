// https://codeforces.com\problemset\problem\1385\C

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
  int p = n - 1;
  while (p && v[p - 1] >= v[p])  --p;
  while (p && v[p - 1] <= v[p])  --p;

  cout << p << "\n";
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
