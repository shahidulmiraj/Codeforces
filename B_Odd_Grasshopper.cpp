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
	ll x, n;
    cin >> x >> n;
    if(n % 4 == 0) cout << x << endl;

    else if(n%4 == 1){
        if(x%2 == 0)  cout << (x-n) << endl;
        else  cout << (x+n) << endl;
    }

    else if(n%4 == 2){
        if(x%2 == 0)  cout << (x+1) << endl;
        else  cout << (x-1) << endl;
    }
    
    else{
        if(x%2 == 0)  cout << (x+1+n) << endl;
        else  cout << (x-1-n) << endl;
    }  
}

int main()
{
	tst 
		solve();
}
