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
    vl v(m);
    CIN(v);
    vl num;
    if(m==1){
        yes;
        return;
    }

    for(ll i=1; i<m; i++){
        num.pb(v[i]-v[i-1]);
    }

    for(ll i=1; i<num.size(); i++){
        if(num[i]<num[i-1]){
            no;
            return;
        }
    }

    ll p=(n-m+1);
    ll mn=v[0]/p;

    if(v[0]%p && v[0]>0){
        mn++;
    }

    if(mn>num[0]){
        no;
        return;
    }
    yes;
}

int main()
{
	tst 
		solve();
}
