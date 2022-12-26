// https://codeforces.com\problemset\problem\1506\C

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
	string a,b;
    cin >> a >> b;
    if(a.size()>b.size()) swap(a,b);
    ll ans=0;
    for(ll i=0; i<a.size(); i++){
        for(ll j=0; j<b.size(); j++){
            ll temp=0;
            if(a[i]==b[j]){
                temp++;
                for(ll k=i+1,l=j+1; k<a.size(); k++,l++){
                    if(a[k]==b[l]) temp++;
                    else break; 
                }

            }
            ans=max(ans,temp);
        }
    }
    cout << a.size()-ans+b.size()-ans << nl;
}

int main()
{
	tst 
		solve();
}
