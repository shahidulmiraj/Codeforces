#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(),x.end()
void makeUnique(vector<long long int> vec)
{
    sort(all(vec));
    vec.resize(unique(all(vec)) - vec.begin());
}

int main()
{
    #define int long long int
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int>num;
    int valley=0;
    bool done=false;
    int index=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        num.push_back(x);
    }
    vector<int>:: iterator it;
        it=unique(num.begin(), num.end());    
        num.resize(distance(num.begin(), it));
        if(num.size()==1) 
        {
            cout<<"YES"<<endl;
            continue;
        }
    cout << num.size() << endl;
    if(num[0]<num[1]) valley++;
    for(int i=1;i<num.size();i++)
    {
        if((num[i]<num[i-1]) && (num[i]<num[i+1] || i==num.size()-1))
        {
            valley++;
        }
    }
    // if(valley==1) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;


    }
}

