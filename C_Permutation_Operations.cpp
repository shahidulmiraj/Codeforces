// https://codeforces.com\contest\1746\problem\C

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
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    set<pair<ll,ll>>st;
    for(ll i=1; i<n; i++){
        if(v[i]<v[i-1]){
            ll p=v[i-1]-v[i];
            st.insert({p,i+1});
        }
    }
    
    ll p=1;
    for(auto it=st.begin(); it!=st.end();){
        if(it->first <= p) {
            cout  << it->second << ' ';
            it++;
        }
        else cout << 1 << ' ';
        p++;
    }
    for(ll i=0; i<=n-p; i++){
        cout << 1 << ' ';
    }
    cout << nl;
}

int main()
{
    tst 
        solve();
}
