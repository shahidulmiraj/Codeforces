// https://codeforces.com\contest\1747\problem\B

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
    if(n==1){
        cout << 1 << nl;
        cout << 1 <<' ' << 2 << nl;
        return;
    }
    ll p=(n+1)/2;
    cout << p << nl;
    ll q=(n/2)+1;
    ll r=2,s=q*3;
    for(ll i=0; i<p; i++){
        cout << r << ' ' << s << nl; 
        r+=3,s+=3;
    }
    
}

int main()
{
    tst 
        solve();
}
