#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes 	cout<<"YES"<<nl
#define no  	cout<<"NO"<<nl
#define error   cout<<-1<<nl
#define nl  	endl
#define tr 		ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst    	int t;cin>>t;while(t--)
#define all(v)  v.begin(),v.end()
#define space   ' '
#define CIN(v) 	for(auto &it:v) cin>>it;
#define COUT(v)	for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi     	vector<int>
#define vl     	vector<ll>
#define si     	set<int>
#define sl     	set<ll>
#define mp     	make_pair
#define pb     	push_back

void solve()
{
	ll n,pos=0,neg=0,z=0,ans=0,sum=0;
    cin >> n;
    vl a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(a[i]>0){
            pos++;
            sum+=(a[i]-1);
        }
        else if(a[i]<0){
            neg++;
            sum+=abs(a[i]+1);
        } 
        else z++;
    }

    if(neg%2==0) sum+=(z*1);
    else {
        if(z>0) sum+=(z*1);
        else sum+=2;
    }
    cout << sum << nl;

}

int main()
{
	solve();
}
