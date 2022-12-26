// https://codeforces.com\problemset\problem\443\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char set[3010];
    gets (set);
    int size=strlen(set)-1;
    int count=0;
    for(int i=61; i<=122; i++){
        for(int j=1; j<size; j+=3){
            if(set[j] == i){
                count++;
                break;
            }   
        }
    }
    cout << count << endl;
    return 0;
}