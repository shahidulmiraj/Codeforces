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
    string s,s1;
    cin >> s;
    ll ans=0;
    
    ll j=0;
    for(ll i=0; i<s.size(); ){
        if(s[i] == '0') ++ans;
        j=i+1;
        while(s[i]==s[j] && j<s.size()){
            j++;
        }
        i=j;
    }
    cout << min(ans,2LL) << nl;
}

int main()
{
    tr;
    tst 
        solve();
}
