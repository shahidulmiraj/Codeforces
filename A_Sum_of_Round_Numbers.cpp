// https://codeforces.com\problemset\problem\1352\A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,j=0,ara[10];
    cin >> n;
    for(int i=10; i<=100000; i=i*10){
        if(n%i > 0){
            ara[j]=n%i;
            j++;
            n-=(n%i);
        }
    }
    cout << j << endl;
    for(int i=0; i<j; i++){
        cout << ara[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int cases;
    cin >> cases;
    while(cases--){
        solve();
    }
    return 0;
}