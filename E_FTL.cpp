// https://codeforces.com\contest\1743\problem\E

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
    ll p1,t1,p2,t2,h,s;
    cin >> p1 >> t1 >> p2 >> t2 >> h >> s;
    double p,q,r;
    ll mx=max(t1,t2);
    p=((double)(p1-s))/t1;
    q=((double)(p2-s))/t2;
    r=((double)(p1+p2)-s)/mx;

    double m=max({p,q,r});
    if(m==p){
        
    }

    cout << p << ' ' << q << ' ' << r << nl;

    ll a=(h/(p1-s))*t1;
    ll b=(h/(p2-s))*t2;
    ll c=ceil(p*mx);
    // cout << min({a,b,c}) << nl;
}

int main()
{
   
        solve();
}
