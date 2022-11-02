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
    ll x = b/c;
    ll y = b%c;
    ll ans = x+y;
    ll p = c*x;
    if(p>0){
        if(p-1>=a) p--;
    }
    x = p/c;
    y = p%c;
    ll ans2 = x+y;
    cout << max(ans,ans2) << endl;
}

int main()
{
	tst 
		solve();
}
