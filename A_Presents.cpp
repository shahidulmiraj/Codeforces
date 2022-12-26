// https://codeforces.com\problemset\problem\136\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[101];
    cin>> n;
    for (int i=0;i<n;i++){
        cin>> p[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n; j++){
            if (i == p[j]){
                cout<< j+1 << ' ';
                break;
            }
        }
    }
    return 0;
}