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
    ll n,m;
    cin >> n >> m;
    vl v(n);
    map<ll,ll>mp;
    ll mx=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]]++;
        mx=max(mx,v[i]);
    }
    ll sum=0;
    ll i=1;
    while(true){
        if(!mp[i]){
            sum+=i;
            mp[i]++;
        }
        if(sum==m){
            break;
        }
        if(sum>m){
            no;
            return;
        }
        i++;
    }
    if(mx>mp.size()) no;
    else yes;
    

    // cout << mp.size() << nl;

}

int main()
{
    tr;
    tst 
        solve();
}
