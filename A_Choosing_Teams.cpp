#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin >> n >> k;
    int time[n];
    for(int i=0; i<n; i++){
        cin >> time[i];
    }
    for(int i=0; i<n; i++){
        if(time[i] <= (5-k)){
            count++;
        }
    }
    if(count/3 >=1){
        cout << count/3 << endl;
    }
    else{
        cout << "0" << endl;
    }
}