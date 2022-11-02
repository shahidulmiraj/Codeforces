#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[3],ans=0;
    for(int i=0; i<3; i++){
        cin >> num[i];
    }
    sort(num, num+3);
    ans = (num[1] - num[0]) + (num[2] - num[1]);
    cout << ans << endl;
    return 0;
}