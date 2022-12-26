// https://codeforces.com\contest\1772\problem\B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a<b && a<c && c<d && b<d){
    cout << "YES" << '\n';
  }
  else if(a>b && a<c && d>b && d<c){
    cout << "YES" << '\n';
  }
  else if(a>b && a>c && b>d && c>d){
    cout << "YES" << '\n';
  }
  else if(a<b && a>c && b>d && c<d) {
    cout << "YES" << '\n';
  }
   else cout << "NO" << '\n';
  
}

int main
()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
