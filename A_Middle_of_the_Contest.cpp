// https://codeforces.com\contest\1133\problem\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes      cout<<"YES"<<nl
#define no       cout<<"NO"<<nl
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
    ll h1,h2,m1,m2;
    char a;
    cin >> h1 >> a >> m1 >> h2 >> a >> m2;

    ll tot = (((h1+h2)*60) + (m1+m2))/2;
    ll min = tot%60;
    ll hour = tot/60;

    if(min <= 9){
        if(hour <= 9) cout << "0" << hour << ":0" << min << endl;
        else cout << hour << ":0" << min << endl;
    }
    else{
        if(hour <= 9) cout << "0" << hour << ":" << min << endl;
        else cout << hour << ":" << min << endl;
    }
}

int main()
{
    solve();
}
