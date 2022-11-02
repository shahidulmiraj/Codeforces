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
    ll n,m;
    cin >> n >> m;
    --n;
    ll r=sqrt(n);
    if(r==0) r++;
    ll s=((n)-(r*r))/r;
    ll sum1=((r-1)*3)+1+s;
    ll p=sqrt(m);
    ll q=(m-(p*p))/p;
    ll sum2=((p-1)*3)+1+q ;

    cout << sum2-sum1 << nl;
}

int main()
{
    tst 
        solve();
}
