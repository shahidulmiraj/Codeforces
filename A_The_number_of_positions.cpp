// https://codeforces.com\problemset\problem\124\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    cin >> n >> a >> b;
    long long ans=0;
    for(int i=0; i<n; i++){
        if (i >= a && n-i-1 <= b) ans++;
    }
    cout << ans << endl;
}