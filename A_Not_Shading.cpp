// https://codeforces.com\problemset\problem\1627\A

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
	ll n,m,a,b;
    cin >> n >> m >> a >> b;
    vector<string>v(n);

    for(ll i=0; i<n; i++) cin >> v[i];
    a--;
    b--;

    if(v[a][b]=='B') {
        cout << 0 << nl;
        return;
    }

    bool p=0,q=0;

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(v[i][j]=='B'){
                if(i==a || j==b) p=1;
                q=1;
            }
        }
    }
    
    if(p)  cout << 1 << nl;
    else if(q) cout << 2 << nl;
    else error;

}

int main()
{
	tst 
		solve();
}
