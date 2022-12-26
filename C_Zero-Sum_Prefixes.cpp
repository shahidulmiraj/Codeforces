// https://codeforces.com\contest\1748\problem\C

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
    vl v(n+1),pre(n+1);
    for(ll i=1; i<=n; i++){
        cin >> v[i];
        pre[i]=pre[i-1]+v[i];
    }
    map<ll,ll> freq;
    ll mx=0,ans=0;

    for(ll i=n; i>0; i--){
        freq[pre[i]]++;
        mx=max(mx,freq[pre[i]]);
        if(v[i]==0){
            ans+=mx;
            mx=0;
            freq.clear();
        }
    }
    ans+=freq[0];
    cout << ans << endl;
}

int main()
{
    tr;
    tst 
        solve();
}
