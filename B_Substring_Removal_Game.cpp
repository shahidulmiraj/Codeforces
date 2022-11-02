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
	string s;
    cin >> s;
    vl v;
    ll j,i;
    for(i=0; i<s.size(); i++){
        ll temp=0;
        if(s[i]=='1'){
            for(j=i; j<s.size(); j++){
                if(s[j]=='0'){
                    break;
                }
                else temp++;
            }
            i=j;
            v.pb(temp);
        }
    }
    sort(all(v),greater<ll>());
    ll sum=0;
    for(ll i=0; i<v.size(); i+=2){
        sum+=v[i];
    }
    cout << sum << nl;
}

int main()
{
	tst 
		solve();
}
