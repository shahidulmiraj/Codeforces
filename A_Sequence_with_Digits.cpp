// https://codeforces.com/problemset/problem/1355/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll digit(ll x) {
	ll m1 = 10, m2 = 0;
	while(x > 0) {
		ll y = x % 10;
		x /= 10;
		m1 = min(m1, y);
		m2 = max(m2, y);
	}
	return m1 * m2;
}

void solve()
{
  ll x, k;
  cin >> x >> k;
  k--;
  while(k--) {
    ll y = digit(x);
    if (y == 0) break;
    x += y;
  }
  cout << x << "\n";
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

