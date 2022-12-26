// https://codeforces.com\contest\1737\problem\0

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
    string s;
    cin >> n >> m >> s;
    vl v(26);

    for(auto it:s){
        v[it-'a']++;
    }
    string s2;

    ll k=0;
    ll p=n/m;
    for(ll i=0; i<m; i++){
        bool check=1;
        for(ll j=0; j<p; j++){
            if(v[j]<=k){
                s2+='a'+j;
                check=0;
                break;
            }
        }
        if(check) s2+='a'+p;
        k++;
    }
    cout << s2 << nl;

}

int main()
{
    tst 
        solve();
}
