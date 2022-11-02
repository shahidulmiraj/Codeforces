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
    cin >>  n;
	string s; 
    cin >> s;
	if(count(all(s),'?')==n) {
		for(ll i=0; i<n; i++){
			if(i&1) cout<<'B';
			else cout<<'R';
		}
		cout<<endl;
		return;
	}

	for(ll i=0; i<n; i++) {
		if(s[i]=='?') continue;
		for(ll j=i+1; j<n && s[j]=='?'; j++){
			if(s[j-1]=='R') s[j]='B';
			else s[j]='R';
		}
		for(ll j=i-1; j>=0 && s[j]=='?'; j--){
			if(s[j+1]=='R') s[j]='B';
			else s[j]='R';
		}
	}
	cout << s << endl;
}

int main()
{
	tst 
		solve();
}
