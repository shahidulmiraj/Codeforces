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
    vl v(n);
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    ll s=mp.size();
    
    if(s==1){
        if(mp[v[0]]==1) cout << 0 << nl;
        else cout << 1 << nl;
        return;
    }

    ll mx=0;

    for(auto it:mp){
        mx=max(mx,it.second);
    }

   cout << max(min(mx,s-1),min(mx-1,s)) << nl;


}

int main()
{
    tst 
        solve();
}
