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
    string a,b;
    cin >> a >> b;
    if(a==b){
        cout << '=' << nl;
        return;
    }
    ll p=a.size()-1;
    ll q=b.size()-1;
    if(a[p]==b[q]){
        if(a[p]=='S'){
            if(p>q) cout << '<' << nl;
            else cout << '>' << nl;
        }
        else{
            if(p>q) cout << '>' << nl;
            else cout << '<' << nl;
        }
    }
    else{
        if(a[p]=='L'  && b[q]=='S'){
            cout << '>' << nl;
        }
        else if(a[p]=='S' && b[q]=='L'){
            cout << '<' << nl;
        }
        else if(a[p]=='M'){
            if(b[q]=='L') cout << '<' << nl;
            else cout << '>' << nl;
            return;
        }
        else if(b[q]=='M'){
            if(a[p]=='L')  cout << '>' << nl;
            else cout << '<' << nl;
        }
    }
}

int main()
{
    tst 
        solve();
}
