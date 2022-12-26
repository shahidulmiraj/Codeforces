// https://codeforces.com\contest\1748\problem\B

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
    ll n,ans=0;
    string s;
    cin >> n >> s;
    for(ll i=0; i<n; i++){
        vl v(10);
        ll mx=0,k,c=0;
        for(ll j=i; j<n && j<i+101; j++){
            int p=s[j]-'0';
            v[p]++;
            if(v[p]==1) c++;
            mx=max(mx,v[p]);
            if(mx<=c) ans++;
        }
    }
    cout << ans << nl;
}

int main()
{
    tst 
        solve();
}
