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
	ll n,x,y; 
    cin >> n >> x >> y;

    if (min(x,y) != 0){
        cout << -1 << nl; 
        return;
    }

    x = max(x,y);

    if(x == 0 || (n-1) % x){
        cout << -1 << nl; 
        return;
    }

    ll ans = 0;
    for(ll i=0; i<n-1; i++){
        if(i%x == 0)  ans = i+2;
        cout << ans << " ";
    }

    cout << nl;
}

int main()
{
	tst 
		solve();
}
