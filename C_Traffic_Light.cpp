// https://codeforces.com\contest\1744\problem\C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes     cout<<"YES"<<nl
#define no      cout<<"NO"<<nl
#define error   cout<<-1<<nl
#define nl      endl
#define tr      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst     int t;cin>>t;while(t--)
#define all(v)  v.begin(),v.end()
#define space   ' '
#define CIN(v)  for(auto &it:v) cin>>it;
#define COUT(v) for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi      vector<int>
#define vl      vector<ll>
#define si      set<int>
#define sl      set<ll>
#define pb      push_back

void solve()
{
    ll n;
    char a;
    string s;
    cin >> n >> a >> s;

    if(a=='g'){
        cout << 0 << nl;
        return;
    }

    ll mn=0,fi=0,la=0,p=0;
    bool ok=0;

    for(ll i=0; i<n; i++){
        p++;
        if(s[i]==a && ok==0){
            p=0;
            ok=1;
        }
        if(s[i]=='g' && ok==1){
            mn=max(p,mn);
            p=0;
            ok=0;
        }
    }
    p=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='g'){
            fi=p;
            p=0;
            break;
        }
        p++;
    }
    for(ll i=n-1; i>=0; i--){
        if(s[i]=='g') break;
        if(s[i]==a){
            la=p+1;
        }
        p++;
    }
    ll ans=0;
    if(la==0) ans=mn;
    else ans=max(mn,fi+la);
    cout << ans << nl;
}

int main()
{
    tst 
        solve();
}
