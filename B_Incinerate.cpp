// https://codeforces.com\contest\1763\problem\B


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n,m;
  cin >> n >> m;

  vector<pair<int,int>>vp(n);
  vector<int> mn(n);

  for(int i = 0; i < n; i++){
    cin >> vp[i].first;
  }
  for(int i = 0; i < n; i++){
    cin >> vp[i].second;
  }

  sort(vp.begin(),vp.end());

  mn[n-1] = vp[n-1].second;
  for(int i = n-2; i >= 0; i--) {
    mn[i]=min(mn[i+1],vp[i].second);
  }

  ll sum = 0, i = 0;
  while(m > 0) {
		sum += m;
		while(i < n && vp[i].first <= sum) {
      i++;
    }
		if (i == n) {
			cout << "YES" << '\n';
			return;
		}
		m -= mn[i];
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
