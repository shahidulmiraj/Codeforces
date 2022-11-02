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
	int n;
    cin >> n;
    cout << 2 << nl << 1;
    vl a(n+1);

    for(ll i=0; i<n; i++){
        a[i]=i+1;
    }

    ll p=2;
    while(p<=n){
        cout << ' ' << p;
        p*=2;
    }

    for(ll i=3; i<=n; i+=2){   
        ll t=i;
        while(t<=n){
            cout << ' ' << t;
            t*=2;
        }
    }
    cout << nl;
}

int main()
{
	tst {
		solve();
	}
}
