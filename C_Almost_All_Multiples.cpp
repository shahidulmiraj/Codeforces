#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl      '\n'
#define yes     cout<<"YES"<<nl
#define no      cout<<"NO"<<nl
#define error   cout<<-1<<nl
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

void divisor(ll n,vl &v1,ll k)
{
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            if(n/i > k) v1.push_back(n/i);
        }
    }
}
void solve()
{
    ll n,k;
    cin >> n >> k;
    vl v(n),v1;
    v1.clear();
    iota(all(v),1);

    if(n%k){
        error;
        return;
    }

    v[0]=k;
    v[n-1]=1;
    if(k<n){
        v[k-1]=n;
        divisor(n,v1,k);
        COUT(v1);
        sort(all(v1));
        for(auto it:v1){
            if(it%k==0){
                swap(v[k-1],v[it-1]);
                k=it;
            }
        }
    }
    COUT(v);
}

int main()
{
    tr;
    tst 
        solve();
}
