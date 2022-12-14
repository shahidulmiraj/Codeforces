// https://codeforces.com\contest\1714\problem\A

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
#define    CIN(v) for(auto &it:v)cin>>it;
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
	ll n,h,m;
    cin >> n >> h >> m;
    ll p=(h*60)+m;
    ll m1=Max,m2=Min,mi=Max;
    vl a(n),c(n);

    for(ll i=0; i<n; i++){
        cin >> a[i] >> c[i];

        if(((a[i]*60)+c[i])<m1)  m1=(a[i]*60)+c[i];
        if(((a[i]*60)+c[i])>m2)  m2=(a[i]*60)+c[i];

    }

    if(m1==p || m2==p) cout << 0 << ' ' << 0 << nl;
    else if((p<m1 && m1<1440) || (p<m2 && m2<1440)){
        for(ll i=0; i<n; i++){
            ll q=(a[i]*60)+c[i];

            if(q>=p && q<mi){
                mi=q;
            }
        }
        ll o=mi-p;
        cout << o/60 << ' ' << o%60<< nl;
    }
    else{
        ll ans=1440-p;
        ans += m1;

        cout << ans/60 << ' ' << ans%60<< nl;
    }



}

int main()
{
	tst {
		solve();
	}
}
