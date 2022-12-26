// https://codeforces.com\contest\1675\problem\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,x,y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c >> x >> y;
        if(a+b+c < x+y){
            cout << "NO" << endl;
        }
        else{
            int p=x-a;
            if(p>=0){
               c= c-p;
            }
            if(c<0){
                cout << "NO" << endl;
            }
            else{
                int q=c+b-y;
                if(q>=0 ){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            } 
        }
    }
    return 0;
}