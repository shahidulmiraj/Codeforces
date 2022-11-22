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
    map<string,bool>m;

    for(ll i=0; i<n; i++){
        cin >> v[i];
        m[v[i]]=1;
    }
    for(auto it:v){
        ll sz=it.size();
        bool ok=0;
        for(ll i=0; i<sz; i++){
            string f=it.substr(0,i);
            string s=it.substr(i,sz-i);
            if(m[f] && m[s]){
                cout << 1;
                ok=1;
                break;
            }
        }
        if(!ok) cout << 0;
    }
    cout << endl;
}

int main()
{
	tst {
		solve();
	}
}
