// https://codeforces.com\problemset\problem\25\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b,even=0,odd=0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x%2==0){
            a=i+1;
            even++;
        }
        else{
            b=i+1;
            odd++;
        }
    }
    if(odd==1) cout << b << endl;
    else cout << a << endl;
}