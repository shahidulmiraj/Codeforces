#include<bits/stdc++.h>
using namespace std;
int main()
{
    int shoe[5],count=0;
    for(int i=0;i<4;i++){
        cin >> shoe[i];
    }
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(shoe[i] == shoe [j] && shoe[j] !=0){
                count++;
                shoe[j]=0;
            }
        }
    }
    cout << count << endl;
    return 0;
}