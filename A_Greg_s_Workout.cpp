// https://codeforces.com\problemset\problem\255\A

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
    ll c=0,b=0,ba=0;
    for(ll i=0; i<n; i++){
        cin >> p;
        if(i%3==0) c+=p;
        else if(i%3==1) b+=p;
        else ba+=p; 
    }
    if(c>b && c>ba) cout << "chest" << nl;
    else if(b>ba && b>c) cout << "biceps" << nl;
    else cout << "back" << nl;
}

int main()
{
	// tst 
		solve();
}
