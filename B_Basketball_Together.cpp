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
    vl v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    sort(all(v),greater<ll>());
    ll ans=0,t=0,j=0;

    for(ll i=0; i<n; i++){
        ll sum=v[i],k=0;
        for(j=i; j<n-t; j++){
            if(sum>m){
                ans++;
                break;
            }
            sum+=v[i];
            k++;
        }
        t+=k;
    }

    cout << ans << nl;
}

int main()
{
	// tst 
		solve();
}
