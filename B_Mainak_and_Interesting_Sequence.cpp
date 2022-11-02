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
    if(n>m) {
        no;
        return;
    }
    if(n==m){
        yes;
        for(ll i=0; i<n; i++){
            cout << 1 << ' ';
        }
        return;
    } 
    if(n%2==0){
        if(m%2==0){
            yes;
            cout << (m-n+2)/2 << ' ' << (m-n+2)/2 << ' ';
            for(ll i=0; i<n-2; i++){
                cout << 1 << ' ';
            }
            cout << nl;
        }
        else no;
        return;
    }
    if(n%2==1){
        yes;
        cout << m-n+1 << ' ' ;
        for(ll i=0; i<n-1; i++){
            cout << 1 << ' ';
        }
        cout << nl;
    }
}

int main()
{
	tst 
		solve();
}
