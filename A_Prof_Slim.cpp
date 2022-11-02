#include<bits/stdc++.h>
using namespace std;

void printans()
{
    int n,count1=0,count2=0,count3=0,count4=0,check=0;
    cin >> n;
    int a[n+1],b[n+1];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < 0){
            b[i] = a[i]*(-1);
        }
        else{
            b[i]=a[i];
        }
    }
    int k=n,i=0;
    while(i<n-1){
        if(b[i] < b[i+1]){
            k=i+1;
            break;
        }
        i++;
    }
    for(int m=0; m<k; m++){
        if(a[i]<0){
            count1++;
        }
        else{
            count2++;
        }
    }
    int x=k;
    while(k<n-1){
        if(b[k] > b[k+1]){
            cout << "NO" << endl;
            check=1;
            break;
        }
        k++;
    }
    for(x; x<n; x++){
        if(a[x]<0){
            count3++;
        }
        else{
            count4++;
        }
    }
    if(count1==0 && count3==0 && check==0){
        cout << "YES" << endl;
        check=1;
    }
    else if(count2==0 && count4==0 && check==0){
        cout << "YES" << endl;
        check=1;
    }
    else if(count2 == count3  && check==0){
        cout << "YES" << endl;
        check=1;
    }
    else {
        if(check==0)
            cout << "NO" << endl;
    }
    
}

int main()
{
    int t;
    cin >> t;
    while(t != 0){
        printans();
        t--;
    }
}