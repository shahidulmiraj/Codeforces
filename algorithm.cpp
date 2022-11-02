#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll ,ll> mp;

int main()
{
    ll n,m;
    cin >> n >> m;

    set<vector<ll>> st;

    for(ll i=0; i<n; i++){
        vector<ll>v(3);
        cin >> v[2] >> v[0] >> v[1];
        st.insert(v);   
    }

    ll sum=0;
    ll t=0;
    for(auto it:st){
        if(t+1<it[0]){
            t=it[0]-1;
            mp[t]=-1;
        }
        t+=it[1];
        mp[t]=it[2];
        
    }
    for(auto it:mp){
        cout << it.first << ' ' << it.second << endl;
    }
    cout << endl;

    for(int i=0; i<m; i++){
        int p;
        cin >> p;
        auto it = mp.lower_bound(p);
        cout << (*it).second << ' ';
    }
    cout << endl;

}

