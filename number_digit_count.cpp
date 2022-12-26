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
  cout << int(log10(n))+1 << nl;
}