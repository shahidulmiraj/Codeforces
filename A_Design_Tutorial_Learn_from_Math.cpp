// https://codeforces.com\problemset\problem\472\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,check=0;
    cin >> n;
    for(int i=4; true; i+=2){
        if((n-i) % 3 == 0){
            cout << i << " " << n-i << endl;
            return 0;
        }
    }
    return 1;
}