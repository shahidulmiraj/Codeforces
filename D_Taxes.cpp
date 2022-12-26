// https://codeforces.com\problemset\problem\735\D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime (int n) {
  if(n < 1) return false;
  if(n <= 2) return true;
  if(n % 2 == 0) return false;
  for(int i = 3; i * i <= n; i+=2){
    if(!(n % i)) return false;
  }
  return true;
}

void solve()
{
  ll n;
  cin >> n;
  ll ans = 0;
  if (is_prime(n)) ans = 1;
  else if (n % 2 == 0) ans = 2; 
  else if (is_prime(n-2))  ans = 2;
  else ans = 3;
  cout << ans << '\n';
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
