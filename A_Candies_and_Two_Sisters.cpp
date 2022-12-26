// https://codeforces.com\problemset\problem\1335\A

#include<bits/stdc++.h>
using namespace std;

void printans()
{
    int n;
    cin >> n;
    if(n < 3){
        cout << "0" << endl;
    }
    else{
        if(n%2 == 0){
            cout << n/2-1 << endl;
        }
        else{
            cout << n/2 << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t != 0){
        printans();
        t--;
    }
}