// https://codeforces.com\problemset\problem\119\A

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
    int a,b,n;
    cin >> a >> b >> n;
	while(true){
        int g = __gcd(a, n);
        n -= g;
        if(n==0){
            printf("0\n");
            return; 
        }
        g = __gcd(b, n);
        n -= g;
        if (n==0) {
            printf("1\n"); 
            return; 
        }
    }
}

int main()
{
	// tst 
		solve();
}
