#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int point[n+1];
    for(int i=0; i<n; i++){
        cin >> point[i];
    }
    int max=point[0], min=point[0], count=0;
    for(int i=1; i<n; i++){
        if(max < point[i]){
            max=point[i];
            count++;
        }
        else if(min > point[i]){
            min=point[i];
            count++;
        }
    }
    cout << count << endl;
}