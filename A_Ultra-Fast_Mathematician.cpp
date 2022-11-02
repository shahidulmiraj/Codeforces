#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num1[100],num2[100];
    cin >> num1 >> num2;
    int size=strlen(num1);
    for(int i=0;i<size;i++){
        if(num1[i]+num2[i]== 97){
            num1[i]='1';
        }
        else{
            num1[i]='0';
        }
    }
        cout << num1;
    return 0;
}