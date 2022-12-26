// https://codeforces.com\problemset\problem\1560\C

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
	int n;
    cin>>n;
    int d=sqrt(n-1);
    n-=(d*d);
    d++;
    if(n==d)  cout << d << ' ' << d << nl;
    else if(n<d)  cout << n <<' ' << d << nl;
    else  cout << d << ' ' << d-(n-d+1)+1 << nl;
}

int main()
{
	tst 
		solve();
}
