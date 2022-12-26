// https://codeforces.com\problemset\problem\1622\A

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
	ll a,b,c;
    cin >> a >> b >> c;
    if(a+b==c || a+c==b || b+c==a){
        yes;
        return;
    }
    if(a==b && c%2==0){
        yes;
        return;
    }
    if(b==c && a%2==0){
        yes;
        return;
    }
    if(c==a && b%2==0){
        yes;
        return;
    }
    no;
}

int main()
{
	tst 
		solve();
}
