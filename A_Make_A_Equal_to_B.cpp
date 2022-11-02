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
    vl a(n),b(n);
    CIN(a);
    CIN(b);
    ll p=count(all(a),0);
    ll q=count(all(b),0);

    bool check=1;
    ll count=0;
    for(ll i=0; i<n; i++){
        if(a[i]!=b[i]){
            check=0;
            count++;
        }
    }
    if(check){ 
        cout << 0 << nl;
        return;
    }
    if(p==q){
        cout << 1 << nl;
        return;
    }
    if(abs(p-q)>=count){
        cout << abs(p-q) << nl;
    }
    else cout << abs(p-q)+1 << nl;

}

int main()
{
    tst 
        solve();
}
