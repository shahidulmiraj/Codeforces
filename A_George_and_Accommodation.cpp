#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,count=0;
    cin>> n ;
    for(int i=0;i<n;i++){
        p=0,q=0;
        cin>> p >> q;
        if(p+1<q){
            count++;
        }
    }
    cout<< count<<endl;
}