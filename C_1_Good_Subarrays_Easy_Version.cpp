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

ll sum(ll n)
{
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    CIN(v);
    ll k=1;
    ll ans=0;
    ll p=0;
    for(ll i=0; i<n; i++){
        if(v[i]>=k){
            k++;
        }
        else {
            ans+=(sum(k-1)-sum(p));
            k=v[i]+1;
            p=v[i]-1;
        }
    }

    ans+=(sum(k-1)-sum(p));
    cout << ans << nl;
}

int main()
{
    tst 
        solve();
}
