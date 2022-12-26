// https://codeforces.com\contest\1771\problem\C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e5 + 9;

int spf[N];
vector<int> primes;
void sieve() {
  for(int i = 2; i < N; i++) {
    if (spf[i] == 0) spf[i] = i, primes.push_back(i);
    int sz = primes.size();
    for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) {
      spf[i * primes[j]] = primes[j];
    }
  }
}

void solve()
{
  ll n;
  cin >> n;
  vector<int>v(n);
  ll cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] % 2 == 0) cnt++;
  }
  if(cnt > 1) {
    cout << "YES" << '\n';
    return;
  }
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; primes[j] * primes[j] <= v[i]; j++) {
      if(v[i] % primes[j] == 0) {
        if(mp[primes[j]]) {
          cout << "YES" << '\n';
          return;
        }
        while(v[i] % primes[j] == 0) v[i] /= primes[j];
        mp[primes[j]]++;
      }
    }
    if(v[i] > 1) {
      if(mp[v[i]]) {
        cout << "YES" << '\n';
        return;
      }
      mp[v[i]]++;
    }
  }
  cout << "NO" << '\n';
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
  sieve();
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
