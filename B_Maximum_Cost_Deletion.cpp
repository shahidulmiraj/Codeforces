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
	int n,a,b;
    string s;
    cin >> n >> a >> b >> s;

    if(b>=0){  
        cout << n*(a+b) << nl;
        return;
    }

    vi v={1};
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1])  v.back()++;
        else  v.pb(1);
    }
    
    ll p=(v.size()+2)/2;
    cout << (a*n)+(p*b)  << nl;
}

int main()
{
	tst {
		solve();
	}
}
