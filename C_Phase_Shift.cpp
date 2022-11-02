// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define yes     cout<<"YES"<<nl
// #define no      cout<<"NO"<<nl
// #define error   cout<<-1<<nl
// #define nl      endl
// #define tr      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
// #define tst     int t;cin>>t;while(t--)
// #define all(v)  v.begin(),v.end()
// #define space   ' '
// #define CIN(v)  for(auto &it:v) cin>>it;
// #define COUT(v) for(auto &it:v) cout<<it<<space;cout<<nl;
// #define vi      vector<int>
// #define vl      vector<ll>
// #define si      set<int>
// #define sl      set<ll>
// #define pb      push_back

// void solve()
// {
//     ll n;
//     string s;
//     cin >> n >> s;

//     map<char,char>mp;

//     bool q[26]={};
//     ll t=0;

//     for(ll i=0; i<n; i++){
//         if(mp.find(s[i])==mp.end()){
//             // cout << s[i] << nl;
//             for(ll j=0; j<26; j++){
//                 if(q[j]==0){
//                     q[j]=1;
//                     mp[s[i]]='a'+j;
//                     break;
//                 }
//             }
//         }
//     // cout << mp.size() << nl;
//         // cout<< nl;
//     }
//     // for(auto it:mp){
//     //     cout << it.first << ' ' << it.second << nl;
//     // }
//     for(ll i=0; i<n; i++){
//         cout << mp[s[i]];
//     }
//     cout << nl;
// }

// int main()
// {
//     tst 
//         solve();
// }


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes     cout<<"YES"<<nl
#define no      cout<<"NO"<<nl
#define error   cout<<-1<<nl
#define nl      endl
#define tr      ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define tst     int t;cin>>t;while(t--)
#define all(v)  v.begin(),v.end()
#define space   ' '
#define CIN(v)  for(auto &it:v) cin>>it;
#define COUT(v) for(auto &it:v) cout<<it<<space;cout<<nl;
#define vi      vector<int>
#define vl      vector<ll>
#define si      set<int>
#define sl      set<ll>
#define pb      push_back

const int N = 26;
vector<int>a1(N,-1);

int solution(int i)
{
    int r = 0;
    int t = i;
    while(t!=-1){
        t = a1[t];
        r++;
        if(t==i) return r;
    }
    return -1;
}


void solve()
{
    a1.clear();
    for(int i=0;i<N;i++) a1[i] = -1;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>a2(N,1);

    for(int i=0; i<n; i++){
        if(a1[s[i]-'a']==-1){
            for(char c='a'; c<='z'; c++){
                
                if(a2[c-'a']!=0 && c!=s[i]){

                    a1[s[i]-'a']=c-'a';
                    int now = solution(c-'a');
                    if(now==-1 || now==N){
                        a2[c-'a']=0;
                        break;
                    }
                }
            }
        }
        char res = a1[s[i]-'a'];
        res+='a';
        cout << res;
    }

    cout << '\n';
}



int main()
{
    tst 
        solve();
}
