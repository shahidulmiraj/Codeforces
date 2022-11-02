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
	ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll s=c*b;
    if(s>d){
        error;
        return;
    }

    vl v(a);
    v[0]=s;
    ll ex=d-s;
    if(ex>(b-1)*a){
        error;
        return;
    }

    for(auto &it:v){
        ll t=min(b-1,ex);
        it+=t;
        ex-=t;
    }
    COUT(v)
}

int main()
{
	tst {
		solve();
	}
}
