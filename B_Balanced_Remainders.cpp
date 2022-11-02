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
    vl a(3);
    ll m=n/3;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll b;
        cin >> b;
        a[b%3]++;
    }
    while(true){
        if(a[0] > m){
            a[0]--;
            a[1]++;
            ans++;
        }
        if(a[1] > m){
            a[1]--;
            a[2]++;
            ans++;
        }
        if(a[2] > m){
            a[2]--;
            a[0]++;
            ans++;
        }
        if(a[0]==a[1] && a[1]==a[2]) break;
    }
    
    cout << ans << nl;

}

int main()
{
	tst {
		solve();
	}
}
