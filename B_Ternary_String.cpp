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
    string s;
    cin>>s;

    ll n,mn=INT_MAX,c=1;
    n=s.size();
    vector<pair<ll,ll>> v;

    for(ll i=1; i<n; i++){
        if(s[i]==s[i-1])
            c++;
        else{
            v.pb({s[i-1]-'0',c});
            c=1;
        }
    }

    v.pb({s[n-1]-'0',c});

    for(ll i=1; i<v.size()-1; i++){
        if(v[i-1].first!=v[i+1].first)
            mn=min(mn,v[i].second+2);
    }
    
    if(mn==INT_MAX) mn=0;
    cout << mn << nl;
}

int main()
{
    tr;
    tst 
        solve();
}
