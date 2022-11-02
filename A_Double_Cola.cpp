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

map<int,string> mp={{5,"Sheldon"},{4, "Leonard"},{3,"Penny"},{2, "Rajesh"}, {1,"Howard"}};

void solve()
{
    ll n;
    cin >> n;
    ll sum=0;
    for(ll i=0; ; i++){
        sum+= (5*pow(2,i));
        if(sum>=n){
            i=pow(2,i);
            ll p=sum-n;
            for(ll j=1; j<6; j++){
                if(i*j>p){ 
                    cout << mp[j] << nl;
                    return;
                }
            }
        }
    }
}

int main()
{
    solve();
}
