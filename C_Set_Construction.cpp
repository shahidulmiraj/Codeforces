// https://codeforces.com\contest\1761\problem\C

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
    string s;
    // map<ll,ll>mp;
    vector<pair<ll,ll>>mp(n+1);
    vector<vector<ll>>v(n+1);

    for(ll i=1; i<=n; i++){
        v[i].pb(i);
    }
    for(ll i=0; i<n; i++){
        cin >> s;
        for(ll j=0; j<n; j++){
            if(s[j]=='1') mp.push_back(make_pair(i+1,j+1));
        }
    }

    for(auto it:mp){
        v[it.second].push_back(it.first);
    }

    for(ll i=1; i<v.size(); i++){
        cout << v[i].size() << ' ';
        for(auto it:v[i]){
            cout << it << ' ';
        }
        cout << endl;
    }
}

int main()
{
    tr;
    tst 
        solve();
}
