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

unordered_map<char,ll>mp1={{'q',9},{'r',5},{'b',3},{'n',3},{'p',1},{'k',0}};
unordered_map<char,ll>mp2={{'Q',9},{'R',5},{'B',3},{'N',3},{'P',1},{'K',0}};

void solve()
{
    ll sum1=0,sum2=0;
	for(ll i=0; i<8; i++){
        string s;
        cin >> s;
        for(auto p:s){
            sum1+=mp1[p];
            sum2+=mp2[p];
        }
    }
    if(sum1==sum2) cout << "Draw" << nl;
    else if(sum1>sum2) cout << "Black" << nl;
    else cout << "White" << nl;
}

int main()
{
	// tst 
		solve();
}
