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
    ll mi=LONG_LONG_MAX;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        mi=min(mi,v[i]);
    }
    ll sum=0;
    if(mi==1){
        for(ll i=0; i<n; i++){
            sum+=(v[i]-1);
        }
        cout << sum << nl;

        return ;
    }

    mi=mi*2-1;

    for(ll i=0; i<n; i++){
        if(v[i]>=mi){
            sum+=(v[i]-1)/mi;
        } 
    }

    cout << sum << nl;
}

int main()
{
    tst 
        solve();
}
