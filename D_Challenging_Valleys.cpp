// https://codeforces.com\contest\1760\problem\D

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
    vl v(n),v1;
    CIN(v);
    ll check=0;
    if(n==1){
        yes;
        return;
    }
    v1.pb(v[0]);
    for(ll i=1; i<n; i++){
        if(v[i]!=v[i-1]) v1.pb(v[i]);
    }
    if(v1[1]>v1[0]) check++;

    for(ll i=1; i<v1.size(); i++){
        if(i==(v1.size()-1)){
            if(v1[i-1]>v1[i]) check++;
        }
        else if(v1[i-1]>v1[i] && v1[i+1]>v1[i]) check++;

    }
    if(check>=2) no;
    else yes;
}

int main()
{
    tr;
    tst 
        solve();
}
