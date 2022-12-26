// https://codeforces.com\problemset\problem\344\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,a[100000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            count++;
        }
    }
    cout << count+1 << endl;
    return 0;
}