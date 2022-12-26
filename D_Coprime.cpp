// https://codeforces.com\contest\1742\problem\D

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
#define vl      vector<int>
#define si      set<int>
#define sl      set<int>
#define pb      push_back


void solve()
{
    int n;
    cin >> n;
    map<ll,ll>mp;
    for(int i=1; i<=n; i++){
        ll p;
        cin >> p;
        mp[p]=i;
    }
    ll mx=-1;
    for(auto it:mp){
        for(auto p:mp){
            if(__gcd(it.first,p.first)==1){
                mx=max(mx,it.second+p.second);
            }
        }
    }

    cout << mx << nl;
}

int main()
{
    tst 
        solve();
}
