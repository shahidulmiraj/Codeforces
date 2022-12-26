// https://codeforces.com\contest\1773\problem\F

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n,a,b;
  cin >> n >> a >> b;
  if(a+b <= n){
    cout << n-(a+b) << '\n';
    for(int i = 0; i < a; i++){
      cout << "1:0" << '\n';
    }
    for(int i = 0; i < b; i++) {
      cout << "0:1" << '\n';
    }
    for(int i = 0; i < n-(a+b); i++) {
      cout << "0:0" << '\n';
    }
  }
  else{
    if(n == 1 ){
      if(a == b){
        cout << 1 << '\n';
        cout << a << ':' << b << '\n';
      }
      else{
        cout << 0 << '\n' << a << ':' << b << '\n';
      }
      
    }
    else{
      cout << 0 << '\n';
      if(a<b){
        ll p = min(a,n-1);
        for(int i = 0; i < p; i++) {
          if (i == p-1) {
            cout << a << ':' << 0 << '\n';
          }
          else cout << "1:0" << '\n';
          a--;
        }
        for(ll i = p; i < n; i++) {
          if(i == n-1) cout << 0 << ':' << b << '\n';
          else cout << "0:1" << '\n'; 
          b--;
        }
      }
      else{
        ll p=min(b,n-1);
        for(int i = 0; i < p; i++) {
          if (i == p-1) {
            cout << 0 << ':' << b << '\n';
          }
          else cout << "0:1" << '\n';
          b--;
        }
        for(ll i = p; i < n; i++) {
          if(i == n-1) cout << a << ':' << 0 << '\n';
          else cout << "1:0" << '\n'; 
          a--;
        }
      }
    }
  }
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
