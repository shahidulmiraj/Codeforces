#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int count1=0,count2=0;
  for(int i=0; i<n; i++){
    int a,b;
    cin >> a >> b;
    if(a>b) count1++;
    else if(b>a) count2++;
  }
  if(count1 > count2) cout << "Mishka" << endl;
  else if(count1 == count2) cout << "Friendship is magic!^^" << endl;
  else cout << "Chris" << endl;
}
