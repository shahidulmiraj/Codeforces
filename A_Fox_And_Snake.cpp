// https://codeforces.com\problemset\problem\510\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i%2 == 0){
                cout << "#";
            }
            else{
                int k=i/2;
                if(k%2 == 0){
                    if(j == n-1){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
                else{
                    if(j == 0){
                        cout << "#";
                    }
                    else{
                        cout << ".";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}