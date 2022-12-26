// https://codeforces.com\problemset\problem\677\A

#include<bits/stdc++.h>
#define max_size 2000;
using namespace std;
int main()
{
    int n,h,a[2000],count=0;
    cin>> n >> h;
    for(int i=0;i<n;i++){
        cin>> a[i];
        if(a[i]<=h){
            count++;
        }
        else{
            count=count+2;
        }
    }
    cout<< count<<endl;
    return 0;
}