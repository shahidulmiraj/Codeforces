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
 
    if(n <= 30){
        no;
        return;
    }
    
    yes;
    if(n==36 || n==40 || n==44)
        cout << 6 << ' ' << 10 << ' ' << 15 << ' ' << n - 31 << '\n';

    else cout << 6 << ' ' << 10 << ' ' << 14 << ' ' << n - 30 << '\n';
}

int main()
{
	tst 
		solve();
}
