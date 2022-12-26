// https://codeforces.com\contest\1709\problem\B

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define nl  endl
#define tr ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define    tst    int t;cin>>t;while(t--)
#define    Max             1000000000000000014
#define    Min             -1000000000000000014
#define    PI              3.1415926535897
#define    Fr               first
#define    Se               second
#define    all(v)          v.begin(),v.end()
#define    mem(a,v)        memset(a,v,sizeof(a))
#define    space            ' '
#define    COUT(v)  for(auto it:v)cout<<it<<space;cout<<nl;
#define    vi     vector<int>
#define    vl     vector<ll>
#define    si     set<int>
#define    sl     set<ll>
#define    msi    multiset<int>
#define    msl    multiset<ll>
#define    pii    pair<int,int>
#define    pil    pair<int,ll>
#define    pli    pair<ll,int>O
#define    pll    pair<ll,ll>
#define    mp     make_pair
#define    pb     push_back
#define    error  cout<<-1<<nl

void solve()
{
    ll n,m;
    ll num=0;
    cin>>n>>m;
    vl a(n+1),b(n+1),c(n+1);

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=1;i<n;i++){
        if(a[i]<a[i-1]) 
            num+=a[i-1]-a[i];
        b[i]=num;
    }

    num=0;
    for(ll i=n-2;i>=0;i--){
        if(a[i]<a[i+1])
            num=num+a[i+1]-a[i];
        c[i]=num;
    }

    while(m--){
        int s,t;
        cin >> s >> t;
        if(s<t)  cout << b[t-1]-b[s-1] << nl;
        else  cout << c[t-1]-c[s-1] << nl;
    }
}

int main()
{
	solve();
}