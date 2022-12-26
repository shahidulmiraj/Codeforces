// https://codeforces.com\problemset\problem\1512\B

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
	int n,i,j;
    cin >> n;
    vector<string>s(n);
    CIN(s);
    vi a,b;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(s[i][j]=='*')
                a.pb(i),b.pb(j);
        }
    }
    if(a[0]==a[1]){
        if(a[0]>0){
            for(i=0; i<2; i++)
                s[a[i]-1][b[i]]='*';
        }
        else
            for(i=0; i<2; i++)
                s[a[i]+1][b[i]]='*';
    }
    if(b[0]==b[1]){
        if(b[0]>0)
            for(i=0; i<2; i++)
                s[a[i]][b[i]-1]='*';
        else
            for(i=0; i<2; i++)
                s[a[i]][b[i]+1]='*';
    }
    for(i=0; i<2; i++)
        for(int j=0; j<2; j++)
            s[a[i]][b[j]]='*';
    for(i=0; i<n; i++)
        cout<<s[i]<<nl;
    
}

int main()
{
	tst 
		solve();
}
