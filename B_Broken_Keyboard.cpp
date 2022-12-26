// https://codeforces.com\contest\1765\problem\B

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
    string s;
    cin >> s;
    if((n+1)%3 == 0){
        no;
        return;
    }
    for(ll i=2; i<n; i+=3){
        if(s[i]!=s[i-1]){
            no;
            return;
        }
    }
    yes;
}

int main()
{
    tr;
    tst 
        solve();
}
