// https://codeforces.com\problemset\problem\1419\D1

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
    vl v(n),ans;
    CIN(v);
    
    sort(all(v));

    ll p = (n-1)/2,q;
    q = 0;
    cout << p << endl;
    for(int i=p; i<n; i++){
        ans.pb(v[i]);
        if(q<p) ans.pb(v[q]);
        q++;
    }
    for(auto it: ans) 
        cout << it << " ";
        
    cout << endl;
}

int main()
{
    solve();
}
