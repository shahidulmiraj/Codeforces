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
    cin >> s;

    string a(n,'0'),b=s;
    a[0]='1',b[0]='1';
    bool ok=false;
    
    for(ll i=1; i<n; i++){
        if(ok) break;
        if(s[i]=='2'){
            a[i]=('1');
            b[i]=('1');
        }
        else if(s[i]=='1'){
            a[i]=('1');
            b[i]=('0');
            ok=true;
        }
    }
    cout << a << nl << b << nl;
    
}

int main()
{
    tst 
        solve();
}
