// https://codeforces.com\problemset\problem\1003\A


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
    map<ll,ll>mp;
    for(ll i=0; i<n; i++){
        ll p;
        cin >> p;
        mp[p]++;
    }
    ll mx=0;
    for(ll i=0; i<mp.size(); i++){
        mx=max(mx,mp[i]);
    }
    cout << mx << nl;
}

int main()
{
	// tst 
		solve();
}
