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
	ll n;
    cin >> n;
    vector<string>v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    bool check=0;
    for(ll i=0; i<n; i++){
        string s;
        s=v[i];
        if(s[0]=='O' && s[1]=='O'){
            s[0]='+';
            s[1]='+';
            v[i]=s;
            check=1;
            break;
        }
        if(s[3]=='O' && s[4]=='O'){
            s[3]='+';
            s[4]='+';
            v[i]=s;
            check=1;
            break;
        }
    }
    if(check==0) no;
    else{
        yes;
        for(ll i=0; i<n; i++){
            cout << v[i] << nl;
        }
    }
    
}

int main()
{
	// tst 
		solve();
}
