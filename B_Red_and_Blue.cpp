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
	ll n,m,sum1=0,sum2=0,mx1=0,mx2=0;

    cin >> n;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        sum1+=x;
        mx1=max(mx1,sum1);
    }

    cin >> m;
    for(ll i=0; i<m; i++){
        ll x;
        cin >> x;
        sum2+=x;
        mx2=max(mx2,sum2);
    }

    cout << mx1+mx2 << nl;

}

int main()
{
	tst {
		solve();
	}
}
