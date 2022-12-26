// https://codeforces.com\problemset\problem\977\C

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
    sort(all(v));
    if(!k){
        if(v[0] == 1) error;
        else cout << 1 << nl;
        return;
    }
    ll p = v[k-1];
    ll ans = 0;
    for(auto x : v){
        if(x<=p) ans++;
        if(ans>k){
            error;
            return;
        }
    }
    cout << p << nl;
}

int main()
{
    solve();
}
