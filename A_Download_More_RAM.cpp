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
	ll n, k;
    cin >> n >> k;
    vector<std::pair<int,int>> a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i].first;
    }
    for(ll i=0; i<n; i++){
        cin >> a[i].second;
    }
 
    sort(a.begin(), a.end());

    for(auto [l,r] : a){
        if(l <= k) k += r;
        else break;
    }
 
    cout << k << "\n";
}

int main()
{
	tst 
		solve();
}
