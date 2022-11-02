#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[52];
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        int min = a[0];
        for(int j=0; j<n; j++){
            if(a[j] < min ){
                min = a[j];
            }
        }
        int ans=0;
        for(int j=0; j<n; j++){
            ans+=a[j]-min;
        }
        cout << ans << endl;
    }
}
