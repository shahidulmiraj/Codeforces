// https://codeforces.com\problemset\problem\200\B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    double sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a;
    }
    printf("%.12llf",sum/n);
    return 0;
}