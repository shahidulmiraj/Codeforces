// https://codeforces.com\contest\1728\problem\B

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
    cin >> n;
    if(n%2){
        cout<<"1 2 3 ";
        for(ll i=n-2;i>=4;i--) cout << i << ' ';
        cout << n-1 << ' ' << n;
    }
    else{
        for(ll i=n-2; i>=1; i--) cout << i << ' ';
        cout << n-1 << ' ' << n;
    }
 
    cout<<endl;
}

int main()
{
	tst 
		solve();
}
