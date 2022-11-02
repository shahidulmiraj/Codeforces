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
    string s;
    cin >> n >> s;
    vl v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll sum=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            ll j=i+1;
            while(j!=n){
                if(s[j]=='0'){
                    break;
                }
                if(v[j]<v[i]){
                    s[i]='1';
                    s[j]='0';
                    i=j-1;
                    break;
                }
                j++;
            }
        }
    }
    
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            sum+=v[i];
        }
    }
    cout << sum << nl;

}

int main()
{
    tst 
        solve();
}
