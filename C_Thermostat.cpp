// https://codeforces.com\contest\1759\problem\C

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
    ll l,r,x,a,b;
    cin >> l >> r >> x >> a >> b;

    if(a>b) swap(a,b);

    if(a==b){
        cout << 0 << nl;
        return;
    }

    if(abs(a-b)>=x){
        cout << 1 << endl;
        return;
    }

    if(a-x>=l || b+x<=r){
        cout << 2 << endl;
        return;
    }
    
    if(b-x>=l && a+x<=r){
        cout << 3 << endl;
        return;
    }
    error;
}

int main()
{
    tr;
    tst 
        solve();
}
