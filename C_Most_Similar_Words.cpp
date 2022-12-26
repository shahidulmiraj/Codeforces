// https://codeforces.com\problemset\problem\1676\C

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
    vector<string> v(n);
    vl ans;

    for (ll i=0; i<n; i++)
        cin >> v[i];

    for(ll i=0; i<n-1; i++){
        for (ll j=i+1; j<n; j++){
            ll temp = 0;
            for (ll k = 0; k < m; k++) {
                temp += abs((v[i][k] - '0') - (v[j][k] - '0'));
            }
            ans.push_back(temp);
        }
    }
    sort(all(ans));
    cout << ans[0] << endl;
    
}

int main()
{
	tst 
		solve();
}
