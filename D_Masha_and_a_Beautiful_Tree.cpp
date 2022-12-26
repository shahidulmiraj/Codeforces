// https://codeforces.com\contest\1741\problem\D

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

vl v;
ll ans=0;

void func(ll l1,ll r1,ll l2,ll r2)
{
    ll p=*min_element(v.begin()+l1,v.begin()+r1);
    ll q=*max_element(v.begin()+l2,v.begin()+r2);
    
    if(l1==r1) return;
    if(p>q){
        ans++;
        ll r=l2;
        for(ll i=l1; i<r1; i++){
            swap(v[i],v[r]);
            r++;
        }
    }
    ll mid1=(l1+r1)/2;
    ll mid2=(l2+r2)/2;
    func(l1,mid1,mid1,r1);
    func(l2,mid2,mid2,r2);
}

void solve()
{
    ll n;
    cin >> n;
    v.resize(n);
    ans=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    if(is_sorted(all(v))){
        cout << ans << nl;
        return;
    }
    ll mid=n/2;
    func(0,mid,mid,n);
    if(is_sorted(all(v))) cout << ans << nl;
    else error;
    
}

int main()
{
    tst 
        solve();
}
