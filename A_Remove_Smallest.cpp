#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,check=0;;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++){
        cin >> ara[i];
    }
    for (int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ara[i] > ara[j]){
                int a=ara[i];
                ara[i]=ara[j];
                ara[j]=a;
            }
        }
    }
    for(int i=0; i<n-1; i++){
        if(abs(ara[i]-ara[i+1]) >1){
            cout << "NO" << endl;
            check=1;
            break;
        }
    }
    if(check == 0){
        cout << "YES" << endl;
    }
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