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
    int r=0,g=0,b=0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='r') r++;
        else if(s[i]=='g') g++;
        else if(s[i]=='b') b++;
        if(s[i]=='R' && r==0){
            no; 
            return;
        }
        if(s[i]=='G' && g==0){
            no; 
            return;
        }
        if(s[i]=='B' && b==0){
            no; 
            return;
        } 
    }
    yes;
}

int main()
{
	tst 
		solve();
}
