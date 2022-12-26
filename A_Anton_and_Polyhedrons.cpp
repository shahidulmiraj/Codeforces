// https://codeforces.com\problemset\problem\785\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    char poly[20];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> poly;
        if(poly[0] == 'T'){
            count+=4;
        }
        else if(poly[0] == 'C'){
            count+=6;
        }
        else if(poly[0] == 'O'){
            count+=8;
        }
        else if(poly[0] == 'D'){
            count+=12;
        }
        else{
            count+=20;
        }
    }
    cout << count << endl;
    return 0;
}