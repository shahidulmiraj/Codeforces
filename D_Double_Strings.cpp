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
    vector<string> v(n);
    unordered_set<string> s;

    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            s.insert(v[i]+v[j]);
            s.insert(v[j]+v[i]);
        }
    }
    
    for(ll i=0; i<n; i++){
        unordered_set<string> :: iterator it;
        it=s.find(v[i]);
        if(it!=s.end()){
            cout << 1;
        }
        else cout << 0;
    }
    cout << nl;
}

int main()
{
	tst {
		solve();
	}
}
