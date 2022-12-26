// https://codeforces.com\contest\1772\problem\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  string s;
  cin >> s;
  int p=s[0]-'0';
  int q=s[2]-'0';
  cout << p+q << '\n';
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
