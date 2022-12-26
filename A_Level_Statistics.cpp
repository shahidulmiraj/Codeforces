// https://codeforces.com\problemset\problem\1334\A

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
    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    if(v[0].first<v[0].second){
        no;
        return;
    }

    for(ll i=1; i<n; i++){
        if(v[i].first<v[i-1].first  || v[i].first<v[i].second || v[i].second<v[i-1].second){
            no; 
            return;
        }
        if(v[i].first-v[i-1].first < v[i].second-v[i-1].second){
            no;
            return;
        }
    }
    yes;
}

int main()
{
    tst 
        solve();
}
