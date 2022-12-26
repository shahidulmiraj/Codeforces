// https://codeforces.com\contest\1744\problem\E1

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
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll p=a*b;
    for(ll i=a+1; i<=c; i++){
        for(ll j=b+1; j<=d; j++){
            if((i*j) % p == 0){
                cout << i << ' ' << j << nl;
                return;
            }
        }
    }
    cout << -1 << ' ' << -1 << nl;
}

int main()
{
    tst 
        solve();
}
