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
    set<ll>st;
    sort(all(v));

    for(ll i = 0;i<n;i++){
        for(ll j = 0;j<n;j++){
            if(i == j) continue;
            st.insert(v[i]+v[j]);
        }
    }

    ll ans=0;
    for(auto it:st){
        ll cnt=0;
        ll p=0,q=n-1;
        while(p<q){
            if(v[p]+v[q] == it){
                cnt++;
                p++,q--;
            }
            else if(v[p]+v[q] > it)
                q--;
            else p++;
        }
        ans = max(ans,cnt);
    }
    
    cout << ans << endl;
}

int main()
{
    tst 
        solve();
}
