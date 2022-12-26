// https://codeforces.com\contest\1726\problem\0
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes 	cout<<"YES"<<nl
#define no  	cout<<"NO"<<nl
#define error   cout<<-1<<nl
#define nl  	endl
#define tr 		ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst    	int t;cin>>t;while(t--)
#define all(v)  v.begin(),v.end()
#define space   ' '
#define CIN(v) 	for(auto &it:v) cin>>it;
#define COUT(v)	for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi     	vector<int>
#define vl     	vector<ll>
#define si     	set<int>
#define sl     	set<ll>
#define pb     	push_back

void solve()
{
	ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx=0,mi=LONG_LONG_MAX;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        mx=max(mx,v[i]);
        mi=min(mi,v[i]);
    }
    ll p=0,q=0,r=0;
    for(ll i=1; i<n; i++){
        r=max(r,v[i-1]-v[i]);
    }
    for(ll i=0; i<n-1; i++){
        p=max(p,v[n-1]-v[i]);
    }
    for(ll i=1; i<n; i++){
        q=max(q,v[i]-v[0]);
    }
    cout << max({p,q,r}) << nl;

}

int main()
{
	tst 
		solve();
}
