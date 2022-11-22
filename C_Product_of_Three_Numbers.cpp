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
    ll p=0;
    vl v(3);

    for(ll i=2; i*i<n && p<2; i++){
        if(n%i == 0) {
            v[p++]=i;
            n=n/i;
        }
    }
    if(p != 2) no;
    else{
        yes << v[0] << ' ' << v[1] << ' ' << n << nl;
    }
}

int main()
{
    tr;
    tst 
        solve();
}
