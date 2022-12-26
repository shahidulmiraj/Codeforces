// https://codeforces.com\contest\1722\problem\D

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
    string s;
    cin >> n >> s;
    ll cnt=0,p=1,q=1,sum=0;

    for(ll i=0; i<n; i++){
        if(i<=(n/2)){
            if(s[i]=='L')  sum+=i;
            else  sum+=(n-i-1);
        }
        else{
            if(s[i]=='R') sum+=(n-i-1);
            else sum+=i;
        }
    }

    vl v;

    for(ll i=0,j=n-1; i<(n/2); i++,j--){
        if(s[i]=='L'){
            v.push_back(n-i-1-i);
            cnt++;
        }
        if(s[j]=='R'){
            v.push_back(j-(n-j-1));
            cnt++;
        }
    }

    sort(all(v),greater<int>());

    for(ll i=0; i<cnt; i++){
        sum+=v[i];
        cout << sum << ' ';
    }
    for(ll i=cnt; i<n; i++){
        cout << sum << ' ';
    }
    cout << nl;
}

int main()
{
	tst 
		solve();
}
