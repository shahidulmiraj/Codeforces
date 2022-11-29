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
    ll n,m;
    cin >> n >> m;
    ll q=n-m+1;
    ll r=n/m;
    ll s=n%m;
    ll a=((r+1)*r/2)*s;
    ll b=(r*(r-1)/2)*(m-s);
    
    cout << a+b << ' ' << q*(q-1)/2 << nl;
}

int main()
{
    tr;
    solve();
}
