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
	ll n;
	cin >> n;
	vl a(n),b(n);

	//input
	for(ll i=0; i<n; i++){
		cin >> a[i];
		b[i]=i+1;
	}

	ll count=1;
	for(ll i=1; i<n; i++){
		if(a[i-1]==a[i]){
			swap(b[i-1],b[i]);
			count++;
		}
		else{
			if(count<2){
				error;
				return;
			}
			count=1;
		}
	}
	if(n==1 || count==1){
		error;
		return;
	}

	// Output
	for(ll i=0; i<b.size(); i++){
		cout << b[i] << ' ';
	}
	cout << nl;
}

int main()
{
	tst {
		solve();
	}
}
