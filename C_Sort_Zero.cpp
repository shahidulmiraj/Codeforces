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
    vl a(n);
    multiset<ll>ms;
    unordered_set<ll>s;

    for(ll i=0; i<n; i++){
        cin >> a[i];
        ms.insert(a[i]);
        s.insert(a[i]);
    }

    if(is_sorted(all(a))){
        cout << 0 << nl;
        return;
    }

    ll index=-1;
    for(ll i=n-1; i>=1; i--){
        if(a[i]<a[i-1]) {
            index=i-1;
            break;
        }
    }
    for(ll i=index; i>=0; i--){
        ms.erase(a[i]);
    }

    set<ll>st;

    for(ll i=n-1; i>=0; i--){
        if(ms.count(a[i])==0) break;
        st.insert(a[i]);
    }

    ll ans=s.size()-st.size();

    cout << ans << nl;
}

int main()
{
	tst {
		solve();
	}
}
