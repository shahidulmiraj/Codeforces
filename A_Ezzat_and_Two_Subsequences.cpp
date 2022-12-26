// https://codeforces.com\problemset\problem\1557\A

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
	ll n,p;
    cin >> n;
    ll m=LONG_LONG_MIN,sum=0;
    for(ll i=0; i<n; i++){
        cin >> p;
        m=max(p,m);
        sum+=p;
    }
    sum-=m;
    double q=m+((double)sum/(n-1));
    printf("%.9lf\n",q);
}

int main()
{
	tst 
		solve();
}
