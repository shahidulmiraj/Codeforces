// https://codeforces.com\contest\1682\problem\A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(n,b,c) max(n,max(b,c))
#define max4(n,b,c,d)   max(n,max(b,max(c,d)))
#define min3(n,b,c) min(n,min(b,c))
#define min4(n,b,c,d)   min(n,min(b,min(c,d)))
#define yes cout<<'Y'<<'E'<<'S'<<nl
#define no  cout<<'N'<<'O'<<nl
#define nl  endl
#define tr ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define    tst    int t;cin>>t;while(t--)
#define    Max             1000000000000000014
#define    Min             -1000000000000000014
#define    PI              3.1415926535897
#define    Fr               first
#define    Se               second
#define    all(v)          v.begin(),v.end()
#define    mem(n,v)        memset(n,v,sizeof(n))
#define    space            ' '
#define    COUT(v)  for(auto it:v)cout<<it<<space;cout<<nl;
#define    vi     vector<int>
#define    vl     vector<ll>
#define    si     set<int>
#define    sl     set<ll>
#define    msi    multiset<int>
#define    msl    multiset<ll>
#define    pii    pair<int,int>
#define    pil    pair<int,ll>
#define    pli    pair<ll,int>
#define    pll    pair<ll,ll>
#define    mp     make_pair
#define    pb     push_back
#define    error  cout<<-1<<nl
 
void solve()
{
   int n;
   string s;
   cin >> n >> s;
   if(n % 2 == 1){
       ll count=1;
       for(int i=n/2;i>0;i--){
           if(s[i]==s[i-1])  count++;
           else  break;
       }
       cout<< 2*count-1 << endl;
   }
   else
   {
       ll count=1;
       for(int i=n/2-1;i>0;i--){
           if(s[i]==s[i-1])  count++;
           else  break;
       }
       cout<< 2*count <<endl;
   }
}
 
int main()
{
    tst {
      solve();
    }
}