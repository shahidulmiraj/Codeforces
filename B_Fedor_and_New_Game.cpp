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
    ll n,m,k,ans=0;
    cin >> n >> m >> k;

    vl a(m+1);
    for(ll i=0;i<=m;i++){
        cin>>a[i];
    } 

    bitset<20>p(a[m]);

    for(ll i=0;i<m;i++){
        ll cnt=0;
        bitset<20>q(a[i]);

        for(ll j=0;j<20;j++){
            if(p[j]!=q[j]) cnt++;
        }
        if(cnt<=k) ans++;
    }
    
    cout << ans << endl;
}

int main()
{
    solve();
}
