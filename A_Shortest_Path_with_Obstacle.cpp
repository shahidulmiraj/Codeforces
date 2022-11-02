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
	ll a1, a2, b1, b2, f1, f2;
    cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;

    ll ans=abs(a1-b1)+abs(a2-b2);

    if (((a1==b1 && a1==f1) && (min(a2,b2) <= f2) && (max(a2,b2) >= f2)) ||  ((a2==b2 && a2==f2) && (min(a1,b1) <= f1) && (max(a1,b1) >= f1)))  ans+=2;

    cout << ans << nl;
    
}

int main()
{
	tst 
		solve();
}
