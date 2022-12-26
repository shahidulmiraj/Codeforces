// https://codeforces.com\problemset\problem\474\A

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
#define    pli    pair<ll,int>
#define    pll    pair<ll,ll>
#define    mp     make_pair
#define    pb     push_back
#define    error  cout<<-1<<nl

void solve()
{
	string a="qwertyuiopasdfghjkl;zxcvbnm,./";
    string b;
    char x;
    cin >> x;
    cin >> b;
    if(x=='R'){
        for(ll i=0; i<b.size(); i++){
            if(b[i]!='q' && b[i]!='a' && b[i]!='z'){
                for(ll j=0; j<a.size(); j++){
                    if(b[i]==a[j]){
                        cout << a[j-1];
                        break;
                    }
                }
            }
        }
    }
    else{
        for(ll i=0; i<b.size(); i++){
            if(b[i]!='p' && b[i]!=';' && b[i]!='/'){
                for(ll j=0; j<a.size(); j++){
                    if(b[i]==a[j]){
                        cout << a[j+1];
                        break;
                    }
                }
            }
        }
    }
}

int main()
{
	solve();
}
