// https://codeforces.com\contest\1760\problem\E

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
    cin >> n;
    vl v(n),v1,v2;
    CIN(v);
    v1=v2=v;
    ll p=-1,q=-1;
    for(ll i=0; i<n; i++){
        if(v[i]==0){
            v1[i]=1;
            break;
        }
    }
    for(ll i=n-1; i>=0; i--){
        if(v[i]==1) {
            v2[i]=0;
            break;
        }
    }
    ll sum1=0,sum2=0,sum=0;
    ll s=0,r=0,t=0;
    for(ll i=n-1; i>=0; i--){
        if(v[i]==0) t++;
        else sum+=t;
        if(v1[i]==0) s++;
        else sum1+=s;
        if(v2[i]==0) r++;
        else sum2+=r;
    }
    cout << max({sum,sum1,sum2}) << nl;
}

int main()
{
    tr;
    tst 
        solve();
}
