#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for ( int i=0; i<t; i++){
        int n;
        cin >> n;
        if((n/2) % 2 != 0){
            cout << "NO" << endl;
        }
        else{
            int sum1=0,sum2=0;
            cout << "YES" << endl;
            for(int j=2; j<=n; j+=2){
                cout << j << " ";
                sum1 += j;
            }
            for(int j=1; j<=n-3; j+=2){
                cout << j << " ";
                sum2 += j;
            }
            cout << sum1-sum2 << endl;
        }
    }
}