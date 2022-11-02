#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d[4],n,dragon[100000]={};
    for(int i=0; i<4; i++){
        cin >> d[i];
    }
    cin >> n;
    for(int i=0; i<4; i++){
        for(int j=d[i]; j<=n; j+=d[i]){
            dragon[j]=1;
        }
    }
    int count=0;
    for(int i=1; i<=n; i++){
        if(dragon[i] == 1)
            count++;
    }
    cout << count << endl;
}