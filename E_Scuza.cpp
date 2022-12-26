// https://codeforces.com\contest\1742\problem\E

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
    vl v(n),mx(n, 0), pre(n+1, 0);
    map<ll,ll>mp;

    ll tot = 0LL;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        tot += v[i];
    }
    mx[0] = v[0];
    pre[0] = v[0];
    
    for(ll i=1; i<n; i++){
        mx[i] = max(mx[i-1],v[i]);
        pre[i] = pre[i-1]+v[i];
    }

    for(ll i=0; i<m; i++){
        ll a;
        cin >> a;
        if(a<v[0]){
            cout << 0 << " ";
        }
        else {
            auto it = upper_bound(mx.begin(), mx.end(), a) - mx.begin();
            //cout << "it = " << it << " ";
            if(it >= n) {
                cout << tot << " ";
            }
            else {
                cout << pre[it-1] << " ";
            }  
        }
    }
    cout << endl;
}

int main()
{
    tst 
        solve();
}
