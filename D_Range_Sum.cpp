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
    if(n%2==0){
        ll j=1;
        for(ll i=0; i<n/2; i++){
            cout << n-j << ' ' << n+j << ' ';
            j++;
        }
        cout << nl;
    }
    else{
        ll p=n;
        ll q=n+3;
        for(ll i=0; i<n/2; i++){
            cout << p << ' ';
            p--;
        }
        for(ll i=0; i<=n/2; i++){
            cout << q << ' ';
            q++;
        }
        cout << nl;
    }
}

int main()
{
    tr;
    tst 
        solve();
}
