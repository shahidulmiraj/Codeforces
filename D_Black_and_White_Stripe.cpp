// https://codeforces.com\problemset\problem\1690\D

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
#define newl    cout << nl

void solve()
{
	ll k,n;
    cin >> k >> n;
    string s;
    cin >> s;
    vl v(k+1);

    for(ll i=0; i<k; i++){
        if(s[i]=='W') v[i+1]=1;
    }

    for(ll i=1; i<=k; i++){
        v[i]+=v[i-1];
    }
    
    ll mn=LLONG_MAX;
    for(int i=0;i+n<=k;i++)
    {
        mn=min(mn,v[i+n]-v[i]);
    }
    cout<<mn<<endl;
}

int main()
{
	tst {
		solve();
	}
}
