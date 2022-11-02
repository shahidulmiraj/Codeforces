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
#define mp     	make_pair
#define pb     	push_back

void solve()
{
	ll n;
    cin >> n;
    vl v(n);
    ll sum=0;

    for(ll i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }

    ll ans=0;
    if(sum%n==0){
        ll p=sum/n;
        for (int i = 0; i < n; i++) {
            if (p < v[i]) ans++;
        } 
        cout << ans << nl;
    }
    else cout << -1 << nl;

}

int main()
{
	tst {
		solve();
	}
}
