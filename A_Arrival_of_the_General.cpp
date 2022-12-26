// https://codeforces.com\problemset\problem\144\A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,soldier[104];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> soldier[i];
    }
    int max=0,min=0;
    for(int i=1; i<n; i++){
        if(soldier[max] < soldier[i]){
            max=i;  
        }
        if(soldier[min] >= soldier[i]){
            min=i;
        }
    }
    int ans = n+max-min-1; 
	if(min < max)
        ans--; 
	if(n == 1) 
        cout << "0" << endl; 
	else 
        cout << ans << endl;
	return 0;
}