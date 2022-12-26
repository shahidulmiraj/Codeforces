#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n,m;
  cin >> n >> m;
  if (n == m || (n == 2 && m == 4) || (n == 4 && m == 2)) {
    cout << '=' << '\n';
  } 
  else if(n == 1 || m == 1 || (n == 2 && m == 3) || (n == 3 && m == 2)) {
    cout << ((n > m) ? '>' : '<') << '\n';
  }
  else {
    cout << ((n < m) ? '>' : '<') << '\n';
  }
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
