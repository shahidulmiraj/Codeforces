// https://codeforces.com\contest\1738\problem\A

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
    vl a(n),b(n),c,d;
    ll cnt1=0,cnt2=0,total=0,sum1=0,sum2=0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        cin >> b[i];
        total+=b[i];
        if(a[i]==0) {
            c.pb(b[i]);
            cnt1++;
            sum1+=b[i];
        }
        else {
            d.pb(b[i]);
            cnt2++;
            sum2+=b[i];
        }
    }
    if(cnt1==0 || cnt2==0){
        cout << sum1+sum2 << nl;
        return;
    }

    sort(all(c));
    sort(all(d));
    
    if(cnt1==cnt2){
        cout << total*2-(min(c[0],d[0])) << nl;
        return;
    }
    else if(cnt1<cnt2){
        for(ll i=1; i<=cnt1; i++){
            sum2+=d[d.size()-i];
        }
        cout << sum1*2+sum2 << nl;
    }
    else{
        for(ll i=1; i<=cnt2; i++){
            sum1+=c[c.size()-i];
        }
        cout << sum2*2+sum1 << nl;
    }


    
}

int main()
{
	tst 
		solve();
}
