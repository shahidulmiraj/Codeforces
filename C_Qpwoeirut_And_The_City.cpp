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
	ll n;
    cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    ll ans=0;
    if(n%2){
        for(ll i=1; i<n; i+=2){
            ll mx=max(a[i-1],a[i+1]);
            if(mx>=a[i]) ans=ans+(mx-a[i])+1;
        }
    }
    else{
        ll x=0,y=0,count1=0,count2=0,j=1;
        while(j<n-2){
            for(ll i=1; i<n-1; i+=2){
                ll mx=max(a[i-1],a[i+1]);
                if(mx>=a[i]) x=x+(mx-a[i])+1; 
            }
            for(ll i=1; i<n-1; i+=2){
                ll mx=max(a[i-1],a[i+1]);
                if(mx>=a[i]) y=y+(mx-a[i])+1;
                if(i==j) i++;
            }
            j+=2;
            count1=min(x,y);
        }
        



        for(ll i=2; i<n-1; i+=2){
            ll mx=max(a[i-1],a[i+1]);
            if(mx>=a[i]) count2=count2+(mx-a[i])+1;
        }
        ll mi=min(count1,count2);
        ans+=mi;
        
    }

    cout << ans << nl;

}

int main()
{
	tst {
		solve();
	}
}
