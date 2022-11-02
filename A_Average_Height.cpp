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
	int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> p(2);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        p[a[i] % 2].pb(a[i]);
    }
    for (auto it: p[0]) {
        cout << it << ' ';
    }
    for (auto it: p[1]) {
        cout << it << ' ';
    }
    cout << nl;
}

int main()
{
	tst 
		solve();
}
