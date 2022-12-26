// https://codeforces.com\problemset\problem\141\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name1[101],name2[101],name3[101];
    cin >> name1 >> name2 >> name3;
    int size1 = strlen(name1);
    int size2 = strlen(name2);
    int size3 = strlen(name3);
    int check = 0;
    if(size1+size2 != size3){
        cout << "NO" << endl;
    }
    else{
        for(int i=0; i<size1; i++){
            for(int j=0; j<size3; j++){
                if(name1[i] == name3[j] && name3[j] != '0'){
                    name3[j]='0';
                    break;
                }
            }
        }
        for(int i=0; i<size2; i++){
            for(int j=0; j<size3; j++){
                if(name2[i] == name3[j] && name3[j] != '0'){
                    name3[j]='0';
                    break;
                }
            }
        }
        for(int i=0; i<size3; i++){
            if(name3[i] != '0'){
                cout << "NO" << endl;
                check=1;
                break;
            }  
        }
        if(check == 0)
            cout << "YES" << endl;
    }
    return 0;
}