#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(a,b,ans) max(a,max(b,ans))
#define max4(a,b,ans,d)   max(a,max(b,max(ans,d)))
#define min3(a,b,ans) min(a,min(b,ans))
#define min4(a,b,ans,d)   min(a,min(b,min(ans,d)))
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
#define    pli    pair<ll,int>
#define    pll    pair<ll,ll>
#define    mp     make_pair
#define    pb     push_back
#define    error  cout<<-1<<nl

void solve()
{
	ll n,a=0,b=0;
	cin >> n;
	ll m=n;
	while(n%2==0){
		n/=2;
		a++;
	}
    while(n%3==0){
    	n/=3;
		b++;
	}
    if(n>1||a>b){
		error;
		return;
	}
	ll ans=0;
	while(m>1){
        if(m%6==0) m/=6;
        else m*=2;
        ans++;
    }
    cout<<ans<<nl;
}

int main()
{
	tst {
		solve();
	}
}
