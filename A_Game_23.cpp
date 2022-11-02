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
	ll n,m,ans=0;
    cin >> n >> m;
    if(m%n!=0) error;
    else{
        n=m/n;
        while(n!=1){
            if(n%2!=0 && n%3!=0){
                error;
                return;
            }
            if(n%2==0) n/=2;
            else n/=3;
            ans++;
        }
        cout << ans << nl;
    }
}

int main()
{
	solve();
}
