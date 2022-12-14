// https://codeforces.com\contest\1722\problem\0

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
    set<char>st={'T','i','m','u','r'};
	ll n;
    cin >> n;
    string s;
    cin >> s;
    if(n!=5){
        no;
        return;
    } 
    for(ll i=0; i<5; i++){
        if(st.find(s[i])==st.end()){
            no; 
            return;
        }
        else{
            st.erase(s[i]);
        }
    }
    yes;
}

int main()
{
	tst 
		solve();
}
