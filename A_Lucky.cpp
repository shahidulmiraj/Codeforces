// https://codeforces.com\contest\1676\problem\0

#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    char a[7];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        int sum1=0,sum2=0;
        for(int j=0,k=3; j<3; j++,k++){
            sum1+=a[j]-'0';
            sum2+=a[k]-'0';
        }
        if(sum1 == sum2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}