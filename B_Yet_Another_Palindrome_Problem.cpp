// https://codeforces.com\problemset\problem\1324\B

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
    bool check=false;

    for(ll i=0; i<n; i++){
        ll a;
        cin >> a;
        if(v[a-1]==0) v[a-1]=i+1;
        else{
            if(i-v[a-1]>0){
                check=true;
            }
        }
    }
    
    check ? yes : no;
}

int main()
{
    tst 
        solve();
}
