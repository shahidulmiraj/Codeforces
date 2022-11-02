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
    string s;
    cin >> n >> m >> s;
    vl v;
    for(ll i=0;i<n;i++){
        if(s[i]=='*')
            v.pb(i);
    }
    if(v.size()==1){
        cout << 1 << nl;
        return;
    }
    int cnt=2,l=v[0];
    for(ll i=1; i<v.size(); i++){
        if(v[i]-l<=m)
            continue;
        cnt++;
        l=v[i-1];
    }
    cout<<cnt<<nl;
}

int main()
{
	tst 
		solve();
}
