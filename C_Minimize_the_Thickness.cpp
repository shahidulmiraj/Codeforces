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
    vl v(n);
    CIN(v);
    ll sum=0,ans=n;
    for(ll i=0; i<n; i++){
        sum+=v[i];
        ll seg=0;
        ll len=0,mxlen=i+1;
        bool possible=false;
        for(ll j=i+1; j<n; j++){
            if(seg+v[j]>sum) break;
            if(j==n-1 && seg+v[j]==sum){
                mxlen=max(mxlen,len+1);
                possible=true;
                break;
            }
            seg+=v[j];
            len++;
            if(seg==sum){
                mxlen=max(mxlen,len);
                len=0;
                seg=0;
            }
        }
        if(possible){
            ans=min(ans,mxlen);
        }
    }
    cout << ans << nl;
}

int main()
{
    tst 
        solve();
}
