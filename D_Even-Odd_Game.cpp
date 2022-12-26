// https://codeforces.com/contest/1472/problem/D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end(), greater<>());

  ll sum = 0;

  for (int i = 0; i < n; i++) {
    if (v[i] % 2 == i % 2) {
      if (i % 2 == 0) sum += v[i];
      else sum -= v[i];
    }
  }

  if (sum > 0) cout << "Alice\n";
  else if (sum == 0) cout << "Tie\n";
  else cout << "Bob\n";

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
