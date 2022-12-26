// https://codeforces.com\contest\1766\problem\B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  int n;
  string s;
  cin >> n >> s;
  set<string> st;
  for (int i = 0; i < n - 1; i++){
    if (st.count(s.substr(i, 2)) == 1){
      cout << "YES" << '\n';
      return;
    }
    if (i >= 1){
      st.insert(s.substr(i - 1, 2));
    }
  }
  cout << "NO" << '\n';
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
