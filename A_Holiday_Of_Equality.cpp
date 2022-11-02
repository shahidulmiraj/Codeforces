#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int citizen[n];
    for(int i=0; i<n; i++){
        cin >> citizen[i];
    }
    int max=citizen[0];
    for(int i=1; i<n; i++){
        if(max < citizen[i]){
            max = citizen[i];
        }
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum += (max-citizen[i]);
    }
    cout << sum << endl;
}