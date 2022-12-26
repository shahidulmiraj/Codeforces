// https://codeforces.com\contest\1758\problem\0

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
    string s,s1;
    cin >> s;
    s1=s;
    reverse(all(s));
    cout << s1 << s << nl;
}

int main()
{
    tr;
    tst 
        solve();
}
