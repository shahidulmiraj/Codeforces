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
    string s,t;
    cin >> n >> t;
    for(ll i=n-1; i>=0; i--){
        if(t[i]=='0'){
            ll d=t[i-2]-'0';
            ll c=t[i-1]-'0';
            d=d*10+c;
            s.pb('a'+d-1);
            i-=2;
        }
        else{
            int d=t[i]-'0';
            s.pb('a'+d-1);
        }
    }
    reverse(all(s));
    cout << s << nl;
}

int main()
{
	tst 
		solve();
}
