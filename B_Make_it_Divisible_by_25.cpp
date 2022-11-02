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

vector<string>v={"00","25","50","75"};

void solve(){
    string s;
    cin >> s ;
    ll ans = LONG_LONG_MAX;

    for (ll i=0; i<v.size(); i++){
        for(ll k=1, j=s.size()-1; j>=0; j--){
            if(s[j]==v[i][k]){
                k--;
                if(k<0){
                    ll gap = s.size()-j-2;
                    ans = min(ans,gap);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
 
 
int main()
{
    tst 
		solve();
}
