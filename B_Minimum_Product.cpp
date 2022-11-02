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
    ll a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    if(a-x+b-y<n){
        cout << x*y << nl;
        return;
    }

    ll t=0,p=0,r=0;
    p=min(n,b-y);
    t=(a-(n-p))*(b-p);
    p=min(n,a-x);
    r=(b-(n-p))*(a-p);

    cout << min(t,r) << nl;
}

int main()
{
    tst 
        solve();
}
