// https://codeforces.com\problemset\problem\757\B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5;
int arr[N+7];

void solve()
{
  int n;
  cin >> n;
  int mx=0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr[x]++;
    mx = max(mx,x);
  }
  
  int ans=1;
  for(int i=2;i<=mx;++i){
    int s=0;
    for(int j = i; j <= mx; j += i) {
      s+=arr[j];
    }
    ans = max (ans,s);
  }
  cout << ans << endl;
}

int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

  solve();
}
