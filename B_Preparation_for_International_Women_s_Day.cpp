#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes      cout<<"YES"<<nl
#define no       cout<<"NO"<<nl
#define error    cout<<-1<<nl
#define nl       endl
#define tr       ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst      int t;cin>>t;while(t--)
#define all(v)   v.begin(),v.end()
#define space    ' '
#define CIN(v)   for(auto &it:v) cin>>it;
#define COUT(v)  for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi       vector<int>
#define vl       vector<ll>
#define si       set<int>
#define sl       set<ll>
#define pb       push_back

void solve()
{
    ll n,k;
    cin >> n >> k;
    vl v(n);
    CIN(v);
    map<ll,ll> mp;

    for(ll i=0; i<n; i++){
        v[i]%=k;
        mp[v[i]]++;
    }

    ll ans=0;

    for(ll i=0; i<k; i++){
        if(i==k-i||i==0)
            ans+=(mp[i]/2)*2;
        else{
            ll x=min(mp[i],mp[k-i]);
            ans+=x*2;
            mp[i]-=x;
            mp[k-i]-=x;
        }
    }
    cout << ans << endl;
}

int main()
{
    solve();
}
