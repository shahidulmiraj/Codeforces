// https://codeforces.com\contest\1742\problem\C

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
    vector<string>v(8);
    for(ll i=0; i<8; i++){
        cin >> v[i];
    }
    for(auto it:v){
        if(count(all(it),'R')==8){
            cout << 'R' << nl;
            return;
        }
    }

    for(ll i=0; i<8; i++){
        ll sum=0;
        for(auto it:v){
            if(it[i]=='B') {
                sum++;
            }
        }
        if(sum==8){
            cout << 'B' << nl;
            return;
        }
    }

}

int main()
{
    tst 
        solve();
}
