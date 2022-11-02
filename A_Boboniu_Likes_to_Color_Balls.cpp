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
	int r,g,b,w;
    cin >> r >> g >> b >> w;
    int count=0;
    count+=(r%2)+(g%2)+(b%2)+(w%2);
    if(count <= 1) {
        yes;
        return;
    }
    count = 0;
    if(r>0 && g>0 && b>0) {
        r--;
        g--;
        b--;
        w += 3;
        count+=(r%2)+(g%2)+(b%2)+(w%2);
        if(count <= 1){
            yes;
            return;
        } 
    }
    no;
}

int main()
{
	tst 
		solve();
}
