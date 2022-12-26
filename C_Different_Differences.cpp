// https://codeforces.com\contest\1772\problem\C


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
  ll n,m;
  cin >> n >> m;
  ll sum=1,p=0,q=0,s=0;
  for(int i = 1; i <= n; i++) {
    if(m-sum < n-s-1){ 
      break;
    }
    cout << sum << ' ';
    p=sum;
    s++;
    q++;
    sum += s;
  }
  for (int i = 0, j=p+1; i < (n-q); i++,j++){
    cout << j << ' ';
  }
  cout << '\n';
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
