#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(a,b,check) max(a,max(b,check))
#define max4(a,b,check,d)   max(a,max(b,max(check,d)))
#define min3(a,b,check) min(a,min(b,check))
#define min4(a,b,check,d)   min(a,min(b,min(check,d)))
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
	string a;
    cin >> a;
    ll check=1;
    for(ll i=0; i<a.size(); i++){
        if(a.substr(i,3) != "WUB"){
            cout << a[i];
            check=0;
        }
        else{
            i+=2;
            if(check==0) cout << " ";
            check++;
        }
    }
}
int main()
{
	solve();
}
