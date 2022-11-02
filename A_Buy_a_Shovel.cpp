#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,count=1;
    cin >> k >> r;
    int n=k;
    while(true){
        int m=k%10;
        if(m == r || m == 0){
            break;
        }
        else{
            k+=n;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}