#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes      cout<<"yes"<<nl
#define no       cout<<"no"<<nl
#define error    cout<<-1<<nl
#define nl       endl
#define tr       ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst      int t;cin>>t;while(t--)
#define all(v)   v.begin(),v.end()
#define space    ' '
#define CIN(v)   for(auto &it:v) cin>>it;
#define COUT(v)  for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi       vector<int>
#define vl       vector<ll>
#define si       set<int>
#define sl       set<ll>
#define pb       push_back

void solve()
{
    ll n;
    cin >> n;
    vl v(n),v1;
    CIN(v);
    if(is_sorted(all(v))) {
        yes;
        cout << 1 << ' ' << 1 << nl;
        return;
    }
    v1=v;
    sort(all(v1));
    ll i=0,j=n-1;
    while(v[i] == v1[i]){
        i++;
    }
    while(v[j] == v1[j]){
        j--;
    }
    reverse(v.begin()+i,v.begin()+j+1);
    if(is_sorted(all(v))) {
        yes;
        cout << i+1 << ' ' << j+1 << nl;
    }
    else no;
}

int main()
{
    tr;
    solve();
}
