// https://codeforces.com\contest\1734\problem\C

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
    string s;
    cin >> n >> s;
    vl v1,v2;
    for(ll i=0; i<n; i++){
        if(s[i]=='0') v1.pb(i+1);
    }
    for(ll i=0; i<n; i++){
        if(s[i]=='1') v2.pb(i+1);
    }
    sort(all(v1));

    COUT(v1);
}

int main()
{
	tst 
		solve();
}
