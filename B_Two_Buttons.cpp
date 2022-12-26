// https://codeforces.com\problemset\problem\520\B

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
    ll n,i,j,m,ans=0;
    cin >> n >> m;
    if(n>=m){
        cout << n-m << endl;
        return;
    }
    while(m!=n){
        if(m>n && (m%2==0)) m/=2;
        else m++;
        ans++;
    }
    cout<<ans<<endl;
}

int main()
{
	// tst 
		solve();
}
