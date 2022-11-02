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
    ll a[5][5]={};

    for(ll i=1; i<4; i++){
        for(ll j=1; j<4; j++){
            cin >> a[i][j];
        }
    }
    
    for(ll i=1; i<4; i++){
        for(ll j=1; j<4; j++){
            if((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1])%2 == 0)
                cout << 1 ;
            else cout << 0;
        }
        cout << nl;
    }
   
}

int main()
{
	// tst 
		solve();
}
