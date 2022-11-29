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

string removeKdigits(string num, int k)
{
    int n = num.size();
    stack<char> mystack;
    // Store the final string in stack
    for (char c : num) {
        while (!mystack.empty() && k > 0 && mystack.top() > c) {
            mystack.pop();
            k -= 1;
        }
 
        if (!mystack.empty() || c != '0')
            mystack.push(c);
    }
 
    // Now remove the largest values from the top of the
    // stack
    while (!mystack.empty() && k--)
        mystack.pop();
    if (mystack.empty())
        return "0";
 
    // Now retrieve the number from stack into a string
    // (reusing num)
    while (!mystack.empty()) {
        num[n - 1] = mystack.top();
        mystack.pop();
        n -= 1;
    }
    return num.substr(n);
}

void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    ll p=s.find('0');
    if(p<0){
        cout << removeKdigits(s, n) << nl;
        return;
    } 
    string s1=s.substr(0,p);
    string s2=s.substr(p,s.size()-p);
    // cout << s1 << nl;
    if(n==p) {
        if(p==s.size()-1){
            cout << removeKdigits(s1,p-1) << nl;
        }
        else{
            cout << removeKdigits(s1,p-1);
            vector<ll> v;
            // for(ll i=)

        }  << removeKdigits(s2,n-p+1) << nl;
    }
    else if(n<p){
        cout << removeKdigits(s1,n) << s2 << nl;
    }
    else{
        cout<< removeKdigits(s1,p-1)<<'0';
        string s3=s.substr(p+1,s.size()-p);
        cout<< removeKdigits(s3,n-p)<<nl;
    }
}

int main()
{
    tr;
    tst 
        solve();
}
