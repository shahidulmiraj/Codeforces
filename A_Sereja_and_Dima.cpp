// https://codeforces.com\problemset\problem\381\A

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
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int i=0,j=n-1,sum1=0,sum2=0;
    
    for(int k=0; k<n; k+=2){
        if(a[i]>a[j]){
            sum1+=a[i];
            i++;
        }
        else{
            sum1+=a[j];
            j--;
        }
        
        if(i>j) break;

        if(a[i]>a[j]){
            sum2+=a[i];
            i++;
        }
        else{
            sum2+=a[j];
            j--;
        }
    }
    
    cout << sum1 << space << sum2 << nl;
}

int main()
{
   
    solve();
    
}