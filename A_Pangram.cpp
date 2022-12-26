// https://codeforces.com\problemset\problem\520\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n ;
    char str[n+1];
    cin >> str;
    for(int i='A',j='a'; i<='Z'; i++,j++){
        for(int k=0; k<n; k++){
            if(str[k] == i || str[k] == j){
                count++;
                break;
            }
        }
    }
    if(count == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
