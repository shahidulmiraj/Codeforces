#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl       '\n'
#define CIN(v)   for(auto &it:v) cin>>it;
#define COUT(v)  for(auto &it:v) cout<<it<<' ';cout<<nl;
#define all(v)  v.begin(),v.end()
#define tr      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main()
{
  tr;
  ll n;
  cin >> n;
  double sum=0;
  for(ll i=1; i<=n; i++){
    sum+=log10(i);
  }
  cout << floor(sum+1) << nl;
  // cout << int(sum+1) << nl;  // same as floor value
}