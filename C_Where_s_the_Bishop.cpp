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
	vector<string>v(8);
    for(ll i=0; i<8; i++){
        cin >> v[i];
    }
    for (ll i=1; i<7; ++i){
        for (ll j=1; j<7; ++j){
            if (v[i][j]=='#'&&v[i+1][j+1]=='#'&&v[i-1][j+1]=='#')
                cout << i+1 << " " << j+1 << nl;
        }
    }
    
}

int main()
{
	tst 
		solve();
}
