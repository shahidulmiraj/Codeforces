// https://codeforces.com/contest/445/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n, m;
  cin >> n >> m;
  string s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i][j] == '.') {
				if ((i + j) & 1) s[i][j] = 'W';
				else s[i][j] = 'B';
			}
		}
	}
	for(auto it : s) {
    cout << it << "\n";
  }
}
int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
