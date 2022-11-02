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

ll len(ll n)
{
    ll cnt=0;
    while(n)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}

void solve()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(len(a)+b > len(c)+d){
        cout << ">" << endl;
        return;
    }
    if(len(a)+b < len(c)+d){
        cout << "<" << endl;
        return;
    }
    while(len(a) > len(c))
        c*=10;
    while(len(a) < len(c))
        a*=10;
    if(a==c)  cout<<"="<<endl;
    else if(a>c)  cout<<">"<<endl;
    else  cout<<"<"<<endl;
}

int main()
{
	tst 
		solve();
}
