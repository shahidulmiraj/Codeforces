// https://codeforces.com\problemset\problem\732\B

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
	ll n,k,ans=0;
    cin >> n >> k;
    vl a(n);
    
    CIN(a);

    for(ll i=1; i<n; i++){
        ll p=k-(a[i-1]+a[i]);
        if(p>0){
            a[i]+=p;
            ans+=p;
        }
    }

    cout << ans << nl;
    COUT(a);
}

int main()
{
	solve();
}
