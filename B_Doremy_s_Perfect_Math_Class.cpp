#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl      '\n'
#define yes     cout<<"YES"<<nl
#define no      cout<<"NO"<<nl
#define error   cout<<-1<<nl
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
    set<ll>st;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        st.insert(v[i]);
    }
    sort(all(v));
    ll p=v[0];
    for(ll i=1; i<n; i++){
       p=__gcd(v[i],p); 
    }

    for(ll i=p; i<v[n-1]; i+=p){
        st.insert(i);
    }
    cout << st.size() << nl;
    
}

int main()
{
    tr;
    tst 
        solve();
}
