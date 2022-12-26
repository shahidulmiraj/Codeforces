// https://codeforces.com\problemset\problem\519\B

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
#define COUT(v)	for(auto &it:v) cout<<it<<nl;
#define vi     	vector<int>
#define vl     	vector<ll>
#define si     	set<int>
#define sl     	set<ll>
#define mp     	make_pair
#define pb     	push_back

void solve()
{
	ll n,p;
    cin >> n;
    ll sum1=0,sum2=0,sum3=0;
    for(ll i=0; i<n; i++){
        cin >> p;
        sum1+=p;
    }
    for(ll i=0; i<n-1; i++){
        cin >> p;
        sum2+=p;
    }
    for(ll i=0; i<n-2; i++){
        cin >> p;
        sum3+=p;
    }
    cout << sum1-sum2 << nl << sum2-sum3 << nl;
}

int main()
{
	// tst 
		solve();
}
