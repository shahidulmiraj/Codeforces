// https://codeforces.com\contest\1703\problem\E

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes     cout<<"YES"<<nl
#define no      cout<<"NO"<<nl
#define error   cout<<-1<<nl
#define nl      endl
#define tr      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst     int t;cin>>t;while(t--)
#define all(v)  v.begin(),v.end()
#define space   ' '
#define CIN(v)  for(auto &it:v) cin>>it;
#define COUT(v) for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi      vector<int>

#define vl      vector<ll>
#define si      set<int>
#define sl      set<ll>
#define pb      push_back

void solve()
{
    ll n;
    cin >>n;
    vector<string> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    ll ans=0;

    for (int j=0; j<(n+1)/2; j++){
      for (int k=0; k<n/2; k++){
        int s = a[j][k]-'0' + a[k][n-1-j] -'0' + a[n-1-j][n-1-k] -'0' + a[n-1-k][j]-'0';
        ans += min(s,4-s);
      }
    }

    cout << ans << nl;
}

int main()
{
    tr;
    tst 
        solve();
}
