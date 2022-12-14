// https://codeforces.com\problemset\problem\1343\C

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
    cin >> n;
    vl v(n),p;
    CIN(v);
    ll mx=v[0];

    for(ll i=1;i<n;i++){
        if(v[i]*v[i-1]<0){
            p.pb(mx);
            mx=v[i];
        }
        else   mx=max(mx,v[i]);
    }

    p.pb(mx);
    mx=0;
    ll ans=accumulate(all(p),0LL);
    cout << ans << nl;
}

int main()
{
    tst 
        solve();
}
