// https://codeforces.com\problemset\problem\1409\A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;
    cout << (abs(a-b) +9)/10 << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}