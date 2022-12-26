// https://codeforces.com\problemset\problem\1154\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,num[4];
    for(int i=0; i<4; i++){
        cin >> num[i];
    }
    for (int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    a = num[3] - num[0];
    b = num[1] - a;
    c = num[2] - a;
    cout << a << " " << b << " " << c << endl;
}