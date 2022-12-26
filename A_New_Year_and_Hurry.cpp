// https://codeforces.com\problemset\problem\750\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum=0,check=0;
    cin >> n >>k;
    for(i=1; i<=n; i++){
        sum+=i*5;
        if(sum > (240-k)){
            cout << i-1;
            check=1;
            break;
        }
    }
    if(check == 0){
        cout << i-1;
    }
    return 0;
}