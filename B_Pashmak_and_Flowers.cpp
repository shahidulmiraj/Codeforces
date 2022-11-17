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

    CIN(v);
    sort(all(v));

    ll mn=v[0],mx=v[n-1];
    ll p=0,q=0;

    for(ll i=0; i<n; i++){
        if(v[i]==mn) p++;
        if(v[i]==mx) q++;
    }
    
    if(mn==mx) cout << 0 << space << n*(n-1)/2 << nl;
    else cout << mx-mn << space << p*q << nl;
}

int main()
{
    tr;
    solve();
}
