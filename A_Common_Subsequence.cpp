// https://codeforces.com\problemset\problem\1382\A

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
	ll n,m;
    cin >> n >> m;
    vl a(n),b(m);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<m;i++){
        cin >> b[i];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                yes;
                cout << 1 << ' ' << a[i] << nl;
                return;
            }
        }
    }
    no;
}

int main()
{
	tst 
		solve();
}
