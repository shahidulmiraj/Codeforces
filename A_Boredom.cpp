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
	ll n,x, sz = 100010; 
    cin >> n;
    ll arr[sz], cnt[sz] = {0};
    for(ll i=0; i<n; i++){
      cin >> x;
      cnt[x]++;
    }
    arr[0] = 0;
    arr[1] = cnt[1];
    for(ll i=2; i<=sz; i++)
      arr[i] = max(arr[i-1], (arr[i-2] + cnt[i]*i));

    cout << arr[sz] << endl;
}

int main()
{
	// tst 
		solve();
}
