// https://codeforces.com\problemset\problem\996\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin >> n;
    ans=n/100;
    n=n%100;
    ans+=n/20;
    n=n%20;
    ans+=n/10;
    n=n%10;
    ans+=n/5;
    n=n%5;
    ans+=n/1;
    n=n%1;
    cout << ans << endl; 
    return 0;
}