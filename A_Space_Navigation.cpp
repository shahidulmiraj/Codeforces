// https://codeforces.com\problemset\problem\1481\A

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
	ll n,m; 
    cin >> n >> m;
    string s;
    cin >> s;
    ll u,d,l,r;
    u=count(all(s),'U');
    d=count(all(s),'D');
    l=count(all(s),'L');
    r=count(all(s),'R');
    bool ok=true;
    if(n>0 && r<n) ok=false;
    if(n<0 && l<(-n)) ok=false;
    if(m>0 && u<m) ok=false;
    if(m<0 && d<(-m)) ok=false;
    if(ok) yes;
    else no;
}

int main()
{
	tst 
		solve();
}
