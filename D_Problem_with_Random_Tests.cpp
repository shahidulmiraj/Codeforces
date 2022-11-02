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
    ll p=-1;
    bool ok=0;
    ll q=-1,ans=-1;
    for(ll i=0; i<n; i++){
        if(s[i]=='0' && ok==1){
            p=i;
            break;
        }
        if(s[i]=='1' && ok==0) {
            ok=1;
            q=i;
        }
    }
    if(!ok){
        cout << 0 << nl;
        return;
    }
    s.erase(0,q);
    if(p==-1){
        cout << s << nl;
        return;
    }
    p=p-q;

    string s1=s.substr(p,n-p),s3={};

    for(ll i=0; i<=p; i++){
        string s2=s.substr(i,n-p);
        ll temp=0,temp2=0;
        bool check=0;
        
        for(ll j=0; j<s2.size(); j++){
            if(s2[j]=='1' || s1[j]=='1'){
                temp++;
            }
            if((s2[j]=='1' || s1[j]=='0') && check==0){
                temp2=j;
                check=1;
            }
        }
        if(temp2>ans){
            s3=s2;
            ans=temp;
        }
    }
    for(ll i=0; i<s3.size(); i++){
        if(s3[i]=='1') s[p+i]='1';
    }

    cout << s << nl;

}

int main()
{
    solve();
}
