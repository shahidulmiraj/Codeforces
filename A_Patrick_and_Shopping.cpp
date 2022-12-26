// https://codeforces.com\problemset\problem\599\A

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
	ll a,b,c;
    cin >> a >> b >> c;
    ll ans=a+b+c;
    ans=min(ans,a+a+b+b);
    ans=min(ans,a+a+c+c);
    ans=min(ans,b+b+c+c);
    cout << ans << endl;
}

int main()
{
	// tst 
		solve();
}
