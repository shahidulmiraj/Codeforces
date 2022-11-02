#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b,c,x,y,z;
    while (n--){
        cin >> a >> b >> c;
        z=c; 
        y= b;
        x= a+y;
        while(true){ 
            if(x%y == a && y%z == b && z%x == c){
                break;
            }
            else{
                y= y+z;
                x= a+y;
            }
        }
        cout << x << " " << y << " "<< z <<endl;
    }
    
}