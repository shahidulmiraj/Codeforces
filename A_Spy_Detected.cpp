#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int spy[n];
    for(int i=0; i<n; i++){
        cin >> spy[i];
    }
    int a=spy[0],count=0;
    for(int i=1; i<n; i++){
        if(a == spy[i]){
            count++;
            if(count >= 2){
                break;
            }
        }
    }
    if(count == 0){
        cout << "1" << endl;
    }
    else{
        for(int i=1; i<n; i++){
            if(a != spy[i]){
                cout << i+1 << endl;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
