// https://codeforces.com\contest\1721\problem\A

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
	string s1,s2,s3;
    cin >> s1 >> s2;
    s3=s1+s2;
    map<char,ll> mp;
    for(ll i=0; i<s3.size(); i++){
        mp[s3[i]]++;
    }
    cout << mp.size()-1 << nl;

}

int main()
{
	tst 
		solve();
}
