#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(count1,count2,c) max(count1,max(count2,c))
#define max4(count1,count2,c,d)   max(count1,max(count2,max(c,d)))
#define min3(count1,count2,c) min(count1,min(count2,c))
#define min4(count1,count2,c,d)   min(count1,min(count2,min(c,d)))
#define yes cout<<'Y'<<'E'<<'S'<<nl
#define no  cout<<'N'<<'O'<<nl
#define nl  endl
#define tr ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst int t; cin>>t; while(t--)
#define    Max             1000000000000000014
#define    Min             -1000000000000000014
#define    PI              3.1415926535897
#define    Fr               first
#define    Se               second
#define    all(v)          v.begin(),v.end()
#define    mem(count1,v)        memset(count1,v,sizeof(count1))
#define    space            ' '
#define    COUT(v) for(auto it:v)cout<<it<<space;cout<<nl;
#define    vi    vector<int>
#define    vl    vector<ll>
#define    si    set<int>
#define    sl    set<ll>
#define    msi    multiset<int>
#define    msl    multiset<ll>
#define    pii    pair<int,int>
#define    pil    pair<int,ll>
#define    pli    pair<ll,int>
#define    pll    pair<ll,ll>
#define    mp    make_pair
#define    pb    push_back
#define    error    cout<<-1<<nl
#define  max 200000
void solve()
{
    string good;
    cin >> good;
    int n=good.length(),count1=0,count2=0,check=0;
    for(int i=0; i<n; i++){
        if(good[i]=='A')
            count1++;
        else
            count2++;
        if(count2 > count1){
            check=1;
            break;
        }
    }
    if(check==1||count2==0||good[n-1]=='A')
        no;
    else
        yes;
   
}

int main()
{
  tst {
    solve();
  }
}