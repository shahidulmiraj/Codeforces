// https://codeforces.com\problemset\problem\490\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define yes cout<<'Y'<<'E'<<'S'<<nl
#define no  cout<<'N'<<'O'<<nl
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
    ll n,k=0,l=0,m=0;
    cin >> n;
    int a[5005],b[5005],c[5005];
    ll cnt1=0, cnt2=0, cnt3=0;
    for(int i=0; i<n; i++){
        int s;
        cin >> s;
        if(s == 1){
            cnt1++;
            a[k]=i+1;
            k++;
        } 
        else if(s == 2) {
            cnt2++;
            b[l]=i+1;
            l++;
        }
        else {
            cnt3++;
            c[m]=i+1;
            m++;
        }
    }
    int ans = min3(cnt1,cnt2,cnt3);
    cout << ans << nl;
    for(int i=0; i<ans; i++){
        cout << a[i] << space << b[i] << space << c[i] <<nl;
    }
}

int main()
{
    
    solve();
}
