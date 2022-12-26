// https://codeforces.com\contest\1766\problem\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n;
  cin >> n;
  int ans = 0;
  for (int j = 1; j <= 9; j++){
    int x = j;
    while (x <= n){
      ans++;
      x *= 10;
    }
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
