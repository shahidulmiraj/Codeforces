// https://codeforces.com\problemset\problem\1474\B

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

bool isPrime(ll n){
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

void solve()
{
	ll n;
    cin >> n;
    ll p=0,q=0;
    for(ll i=n+1; ;i++){
        if(isPrime(i)){
            p=i;
            q=p+n;
            break;
        }
    }
    for(ll i=q; ;i++){
        if(isPrime(i)){
            q=i;
            break;
        }
    }
    cout << p*q << endl;
}

int main()
{
	tst 
		solve();
}
