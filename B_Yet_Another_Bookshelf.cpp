// https://codeforces.com\problemset\problem\1433\B

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
    vl v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll ans=0,c=0,check=0;
    for(ll i=0; i<n; i++){
        if(v[i]==1){
            if(check==1) ans+=c;
            check=1;
            c=0;
        }
        else c++;
    }
    cout << ans << nl;
}

int main()
{
	tst 
		solve();
}
