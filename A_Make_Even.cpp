// https://codeforces.com\problemset\problem\1611\A

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
    string s;
	cin >> s;

	ll d=s[s.size()-1]-'0';
    if(d%2 == 0){ 
        cout << 0 << nl;
        return;
    }

    for(ll i=0; i<s.size(); i++){
        d=s[i]-'0';
        if(d%2 == 0){
            if(i == 0) cout << 1 << nl;
            else cout << 2 << nl;
            return;
        }
    }
	cout << -1 << endl;
}

int main()
{
	tst 
		solve();
}
