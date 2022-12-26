// https://codeforces.com\problemset\problem\1702\C

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
#define mp     	make_pair
#define pb     	push_back

void solve()
{
    ll n,q,a,b;
    cin >> n >> q;
    vector<ll> v(n);
    map<ll,vector<ll>> mp;

    for (ll i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    for (ll i=0; i<q; i++) {
        cin >> a >> b;
        ll p = mp[a].size();
        ll q = mp[b].size();
    
        if(p==0 || q==0) no;
        else {
            if(mp[a][0] < mp[b][q-1]) yes;
            else no;
        }
    }
}

int main()
{
	tst {
		solve();
	}
}
