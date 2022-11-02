#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char b[101];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> b; 
        cout << b[0];
        for(int j=1; j<strlen(b)-2; j+=2){
            cout << b[j];
        }
        cout << b[strlen(b)-1] << endl;
    }
}