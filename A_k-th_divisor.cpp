// https://codeforces.com\problemset\problem\762\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl       '\n'
#define yes      cout<<"YES"<<nl
#define no       cout<<"NO"<<nl
#define error    cout<<-1<<nl
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
    vl v;
    ll cnt=0;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            v.pb(i);
            cnt++;
        }
        if(cnt==k){
            cout << i << nl;
            return;
        }
    }
    
    ll p=sqrt(n);
    if(p*p==n){
        if(cnt*2-1 < k){
            error;
            return;
        }
        ll q=k-cnt;
        cout << n/v[v.size()-q-1] << nl;
    }
    else{
        if(cnt*2 < k){
            error;
            return;
        }
        ll q=k-cnt;
        cout << n/v[v.size()-q] << nl;
    }
}

int main()
{
    tr;
    solve();
}
