// https://codeforces.com\problemset\problem\1551\B1

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
    map<char,ll>mp;
	string s;
    cin >> s;
    for(ll i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    ll c=0;
    for(ll i=0; i<mp.size(); i++){
        if(mp[i]>2){
            c+=mp[i]-2;
        }
    }
    cout << (s.size()-c)/2 << nl;

}

int main()
{
	tst 
		solve();
}
