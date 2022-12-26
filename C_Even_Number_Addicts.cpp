// https://codeforces.com\contest\1738\problem\C

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
    vl v(n);
    ll odd=0,even=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        if(v[i]%2) odd++;
        else even++;
    }
    if(odd%4==0 || odd%4==3){
        cout << "Alice" << nl;
        return;
    }
    if(odd%4==2){
        cout << "Bob" << nl;
        return;
    }
    if(odd%4==1){
        if(even%2) cout << "Alice" << nl; 
        else cout << "Bob" << nl;
    }
}

int main()
{
	tst 
		solve();
}
