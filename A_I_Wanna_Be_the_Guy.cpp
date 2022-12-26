// https://codeforces.com\problemset\problem\469\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x[202],count=0;
    cin >> n >> p;
    for(int i=0; i<p; i++){
        cin >> x[i];
    }
    cin >> q;
    for(int i=p; i<p+q; i++){
        cin >> x[i];
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<p+q; j++){
            if(i == x[j]){
                count++;
                break;
            }
        }
    }
    if(count < n){
        cout << "Oh, my keyboard!" <<endl;
    }
    else{
        cout << "I become the guy." <<endl;
    }
    return 0;
}