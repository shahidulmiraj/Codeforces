// https://codeforces.com\contest\1737\problem\C

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
    ll n,r1,r2,r3,c1,c2,c3,x,y;
    cin >> n >> r1 >> c1 >> r2 >> c2 >> r3 >> c3 >> x >> y;

    ll p=(r1+r2+r3+1)/3;
    ll q=(c1+c2+c3+1)/3;

    if((p==1 || p==n) && (q==1 || q==n)){
        if(x==p || y==q) yes;
        else no;
    } 
    
    else{
        if(x%2 == p%2 || y%2 == q%2) yes;
        else no;
    }

}

int main()
{
    tst 
        solve();
}
