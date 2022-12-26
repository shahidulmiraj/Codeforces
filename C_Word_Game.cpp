// https://codeforces.com\contest\1722\problem\C

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
    map<string,ll>mp;
    vector<string>v1(n),v2(n),v3(n);
    for(ll i=0; i<n; i++){
        cin >> v1[i];
        mp[v1[i]]++;
    }
    for(ll i=0; i<n; i++){
        cin >> v2[i];
        mp[v2[i]]++;
    }
     for(ll i=0; i<n; i++){
        cin >> v3[i];
        mp[v3[i]]++;
    }

    ll ans1=0,ans2=0,ans3=0;

    for(ll i=0; i<n; i++){
        if(mp[v1[i]]==1) ans1+=3;
        else if(mp[v1[i]]==2) ans1++;

        if(mp[v2[i]]==1) ans2+=3;
        else if(mp[v2[i]]==2) ans2++;

        if(mp[v3[i]]==1) ans3+=3;
        else if(mp[v3[i]]==2) ans3++;
    }
    
    cout << ans1 << ' ' << ans2 << ' ' << ans3 << nl;
}

int main()
{
	tst 
		solve();
}
