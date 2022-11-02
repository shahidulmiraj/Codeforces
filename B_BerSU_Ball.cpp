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
    cin >> n;
    vl b(n);
    CIN(b);
    cin >> m;
    vl g(m);
    CIN(g);
    sort(all(b));
    sort(all(g));
    
    ll k=0,ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=k; j<m; j++){
            if(abs(b[i]-g[j])<2){
                ans++;
                k=j+1;
                break;
            }
        }
    }   
    cout << ans << nl;
}

int main()
{
	// tst 
		solve();
}
