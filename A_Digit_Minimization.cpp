#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        char a[12]={};
        cin >> a;
        if(strlen(a) < 3){
            cout << a[1] << endl;
        }
        else{
            char min =a[0];
            for(int i=1; i< strlen(a); i++){
                if(min > a[i]){
                    min = a[i];
                }
            }
            cout << min << endl;
        }
    }
}