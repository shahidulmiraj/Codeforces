// https://codeforces.com\contest\1767\problem\A


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  int a, b;
  set<int> x , y;
  for(int i = 0; i < 3; i++){
    cin >> a >> b;
    x.insert(a);
    y.insert(b);
  }

  if(y.size() < 3 and x.size() < 3) cout << "NO" << '\n';
  else cout << "YES" << '\n';
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
