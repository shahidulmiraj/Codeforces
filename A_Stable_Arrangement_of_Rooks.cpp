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
	ll n,m;
    cin >> n >> m;
    ll mx=(n+1)/2;
    if(m>mx){
        error;
        return;
    }
    ll ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(i==j){
                ans++;
                if((ans&1)&&m) cout<<"R",m--;
                else cout<<".";
            }
            else  cout<<".";
        }
        cout<<endl;
    }
}

int main()
{
	tst 
		solve();
}
